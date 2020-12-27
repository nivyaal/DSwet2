#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_
#include <iostream>

template <class T>
class DynamicArray
{
private:
    int size;
    int cnt;
    T *data;
    void resize();
    void enlarge(const int factor);

public:
    explicit DynamicArray(const int array_size) : size(array_size), cnt(0), data(new T[array_size]){};

    explicit DynamicArray(const int array_size, const T &intial) : size(array_size), cnt(0), data(new T[array_size])
    {
        for (int i = 0; i < array_size; i++)
        {
            data[i] = intial;
        }
    };

    ~DynamicArray()
    {
        delete[] data;
    };
    int getSize() const { return size; };
    T &operator[](
        const int index);
    void push(const T &value);
    const T &operator[](const int index) const;
};

template <class T>
T &DynamicArray<T>::operator[](const int index)
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
        resize();
    }
    data[cnt++] = value;
}

template <class T>
void DynamicArray<T>::resize()
{
    auto old_array = this->data;
    auto oldsize = size;

    if (cnt >= size)
    {
        this->enlarge(2);
    }
    return;
}

template <class T>
void DynamicArray<T>::enlarge(const int factor)
{
    auto old_array = this->data;
    auto oldsize = size;
    this->data = new T[factor * size];
    this->size = factor * size;
    for (int i = 0; i < size; i++)
    {
        data[i] = old_array[i];
    }
    delete[] old_array;
}

#endif