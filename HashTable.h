#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include "List.h"
#include "Pair.h"
#include "exceptions.h"

template <class T>
class HashTable
{
private:
    List<Pair<int, T>> *data;
    int intial_size = 8;
    int size;
    int cnt;
    void enlarge();
    void shrink();
    bool isTooBig();
    bool isTooSmall();
    void resize();
    int hash(const int key);

public:
    ~HashTable() { delete[] data; };
    void insert(const int key, const T &value);
    void erase(const int key);
    T *find(const int key);
};

template <class T>
void HashTable<T>::resize()
{
    if (this->isTooBig())
    {
        this->enlarge();
    }
    if (this->isTooSmall())
    {
        this->shrink();
    }
}

template <class T>
void HashTable<T>::enlarge()
{
    auto old_array = data;
    int old_size = size;
    data = new List<Pair<int, T>>[size * 2];
    size = size * 2;
    for (int i = 0; i < old_size; i++)
    {
        ListNode<Pair<int, T>> *pair_node = old_array[i].getHead();
        while (pair_node)
        {
            int key = pair_node->getValue()->first;
            T value = pair_node->getValue()->second;
            data[hash(pair_node->getValue()->first)].insertStart(Pair<int, T>(key, value));
            pair_node = pair_node->getNext();
        }
    }
}

template <class T>
void HashTable<T>::shrink()
{
    auto old_array = data;
    int old_size = size;
    data = new List<Pair<int, T>>[size / 2];
    size = size / 2;
    for (int i = 0; i < old_size; i++)
    {
        ListNode<Pair<int, T>> *pair_node = old_array[i].getHead();
        while (pair_node)
        {
            int key = pair_node->getValue()->first;
            T value = pair_node->getValue()->second;
            data[hash(pair_node->getValue()->first)].insertStart(Pair<int, T>(key, value));
            pair_node = pair_node->getNext();
        }
    }
}

template <class T>
void HashTable<T>::insert(const int key, const T &value)
{
    resize();
    int index = hash(key);
    if (this->find(key) != nullptr)
    {
        throw Failure();
    }
    this->data[index].insertStart(Pair<int, T>(key, value));
}

template <class T>
void HashTable<T>::erase(const int key)
{
    if (find(key) == nullptr)
    {
        throw Failure();
    }
    int index = hash(key);
    resize();
}

template <class T>
T *HashTable<T>::find(const int key)
{
    Pair<int, T> *tmp = data[hash(key)].find(Pair<int, T>(key, T()));
    if (tmp == nullptr)
    {
        return nullptr;
    }
    return &(tmp->second);
}

template <class T>
int HashTable<T>::hash(const int key)
{
    return key % this->size;
}

#endif