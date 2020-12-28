#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include "List.h"
#include "Pair.h"
#include "exceptions.h"

template <class T>
class HashTable
{
private:
    int resize_factor=2;
    int initial_size = 8;
    int size;
    int cnt;
    List<Pair<int, T>> *data;
    void enlarge();
    void shrink();
    bool isTooBig();
    bool isTooSmall();
    void resize();
    int hash(const int key, const int hash_factor) const;

public:

    explicit HashTable() :size(initial_size),cnt(0), data(new List<Pair<int,T>>[initial_size]) {};

    ~HashTable() { delete[] data; };
    void insert(const int key, const T &value);
    void erase(const int key);
    T *find(const int key);
};

template< class T>
bool HashTable<T>::isTooSmall()
{
    if (cnt >=initial_size && cnt < size/2)
    {
        return true;
    }
    return false;
}


template< class T>
bool HashTable<T>::isTooBig()
{
    if (cnt == size)
    {
        return true;
    }
    return false;
}

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
    int tmp_size = size * resize_factor;
    List<Pair<int, T>>* tmp_data = new List<Pair<int, T>>[tmp_size];
    for (int i = 0; i < this->size; i++)
    {
        ListNode<Pair<int, T>> *pair_node = data[i].getHead();
        while (pair_node)
        {
            int key = pair_node->getValue()->first;
            T value = pair_node->getValue()->second;
            int index =hash(key, tmp_size); 
            tmp_data[index].insertStart(Pair<int, T>(key, value));
            pair_node = pair_node->getNext();
        }
    }
    delete[] data;
    data = tmp_data;
    size= tmp_size;
}

template <class T>
void HashTable<T>::shrink()
{
    int tmp_size = size /resize_factor ;
    List<Pair<int, T>>* tmp_data = new List<Pair<int, T>>[tmp_size];
    for (int i = 0; i < this->size; i++)
    {
        ListNode<Pair<int, T>> *pair_node = data[i].getHead();
        while (pair_node)
        {
            int key = pair_node->getValue()->first;
            T value = pair_node->getValue()->second;
            int index =hash(key, tmp_size); 
            tmp_data[index].insertStart(Pair<int, T>(key, value));
            pair_node = pair_node->getNext();
        }
    }
    delete[] data;
    data = tmp_data;
    size= tmp_size;
}

template <class T>
void HashTable<T>::insert(const int key, const T &value)
{
    resize();
    int index = hash(key, this->size);
    if (this->find(key) != nullptr)
    {
        throw Failure();
    }
    this->data[index].insertStart(Pair<int, T>(key, value));
    cnt++;
}

template <class T>
void HashTable<T>::erase(const int key)
{
    if (find(key) == nullptr)
    {
        throw Failure();
    }
    int index = hash(key, this->size);
    data[index].remove(Pair<int,T>(key,T()));
    cnt--;
    resize();
}

template <class T>
T *HashTable<T>::find(const int key)
{
    Pair<int, T> *tmp = data[hash(key, this->size)].find(Pair<int, T>(key, T()));
    if (tmp == nullptr)
    {
        return nullptr;
    }
    return &(tmp->second);
}

template <class T>
int HashTable<T>::hash(const int key ,const int hash_factor) const
{
    return key % hash_factor;
}

#endif