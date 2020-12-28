#ifndef PAIR_H_
#define PAIR_H_
#include <iostream>

template <class T, class U>
class Pair
{
private:
public:
    T first;
    U second;
    explicit Pair(const T &init_first, const U &init_second) : first(init_first), second(init_second){};
    explicit Pair() = default;
    bool operator==(const Pair<T, U> &other) const;
};

template <class T, class U>
bool Pair<T, U>::operator==(const Pair<T, U> &other) const
{
    return other.first == first;
}
#endif
