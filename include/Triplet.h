#ifndef TRIPLET_H_
#define TRIPLET_H_
#include <iostream>

template <class T, class U, class V>
class Triplet
{
private:
public:
    T first;
    U second;
    V third;


    bool operator==(const Triplet other) const;
    explicit Triplet(  T init_first, U init_second,V init_third) : first(init_first), second(init_second), third(init_third){};
    explicit Triplet( T init_first) : first(init_first), second(U()), third(V()){};
    explicit Triplet()=default;
};

template <class T, class U, class V>
bool Triplet<T, U, V>::operator==(const Triplet other) const
{
    return first == other.first;
}

#endif