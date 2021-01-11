#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_
#include <iostream>
#include "exceptions.h"

template <class T>
class DynamicArray
{
private:
    int initial_size = 8;
    int size;
    int cnt;
    int growth_factor = 2;
    T *data;
    void resize();
    void enlarge(const int factor);

public:
    explicit DynamicArray() : size(initial_size), cnt(0), data(new T[initial_size]){};

    ~DynamicArray()
    {
        delete[] data;
    };
    int getSize() const { return size; };
    T &operator[](const int index);
    const T &operator[](const int index) const;
    void push(const T &value);
};

template <class T>
T &DynamicArray<T>::operator[](const int index)
{
    if (index < 0 || index > cnt || data == nullptr)
    {
        throw Failure(); //
    }
    else
    {
        return data[index];
    }
}

template <class T>
const T &DynamicArray<T>::operator[](const int index) const
{
    if (index < 0 || index > cnt || data == nullptr)
    {
        throw; //
    }
    else
    {
        return data[index];
    }
}
template <class T>
void DynamicArray<T>::push(const T &value)
{
    if (cnt == size)
    {
        this->enlarge(growth_factor);
    }
    data[cnt++] = value;
}

template <class T>
void DynamicArray<T>::enlarge(const int factor)
{
    auto old_array = this->data;
    int old_size = size;
    this->data = new T[factor * size];
    this->size = factor * size;
    for (int i = 0; i < old_size; i++)
    {
        data[i] = old_array[i];
    }
    delete[] old_array;
}

#endif
