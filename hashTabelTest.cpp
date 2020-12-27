#include <iostream>
#include "include/HashTable.h"

int main()
{
    HashTable<int> table;
    for (int i = 0; i < 50; i++)
    {
        table.insert(i, i);
    }

    for (int i = 0; i < 50; i++)
    {
        std::cout << *table.find(i) << std::endl;
    }
}