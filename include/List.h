#ifndef LIST_H_
#define LIST_H_

#include <iostream>
template <class T>
class ListNode
{
private:
public:
    T value;
    ListNode<T> *next;
    ListNode() : value(T()), next(nullptr){};
    explicit ListNode(T val) : value(val), next(nullptr){};
    ListNode<T> *getNext() { return this->next; };
    T *getValue() { return &(this->value); };
};

template <class T>
class List
{
private:
    int size;
    ListNode<T> *head; // smallest val
    void insertStart(const T &val, ListNode<T> *head);
    void remove(const T &val, ListNode<T> *head);
    void emptyList(ListNode<T> *curr);

public:
    List() : size(0), head(new ListNode<T>()) { head->next = nullptr; };
    ~List()
    {
        emptyList(head);
        delete head;
    };
    void insertStart(const T &val);
    void remove(const T &val);
    T *find(const T &val);
    ListNode<T> *getHead() { return head->next; };
};

template <class T>
T *List<T>::find(const T &val)
{
    ListNode<T> *temp;
    temp = head->next;
    while (temp)
    {
        if (temp->value == val)
        {
            return &(temp->value);
        }
        temp = temp->next;
    }
    return nullptr;
}

template <class T>
void List<T>::remove(const T &val)
{
    remove(val, head);
    if (size > 0)
    {
        size--;
    }
}

template <class T>
void List<T>::remove(const T &val, ListNode<T> *head)
{
    if (head->next == nullptr)
    {
        return; // throw value doesn't exist
    }
    if ((head->next)->value == val)
    {
        ListNode<T> *new_next = (head->next)->next;
        delete head->next;
        head->next = new_next;
        return;
    }
    remove(val, head->next);
}

template <class T>
void List<T>::emptyList(ListNode<T> *curr)
{
    if (curr->next == nullptr)
    {
        return;
    }
    emptyList(curr->next);
    remove((curr->next)->value, curr);
}

template <class T>
void List<T>::insertStart(const T &val)
{
    insertStart(val, head);
    size++;
}

template <class T>
void List<T>::insertStart(const T &val, ListNode<T> *head)
{
    ListNode<T> *temp = head->next;
    ListNode<T> *new_ListNode = new ListNode<T>(val);
    head->next = new_ListNode;
    new_ListNode->next = temp;
}

#endif
