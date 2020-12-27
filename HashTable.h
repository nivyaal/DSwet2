#difndef HASHTABLE_H_
#define HASHTABLE_H_
#include "List.h"

template <class T>
class HashTable
{
private:
    List<T> *data;
    int size;
    int cnt;
    void enlarge();
    void shrink();
    bool isTooBig();
    bool isTooSmall();
    void resize();
    int hash(const int key);

public:
    HashTable();
    ~HashTable();
    void insert();
    void erase();
    void contain();
};
#endif