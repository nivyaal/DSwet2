#include <iostream>
#include "include/HashTable.h"

int main()
{
    HashTable<int> table;
    for (int i = 0; i < 50; i++)
    {
        table.insert(i, i);
    }

    for (int i = 0; i < 25; i++)
    {
        table.erase(i);
    }

    for (int i = 0; i < 50; i++)
    {
        if ( table.find(i)== nullptr)
        {
            continue;
        }
        std::cout << *table.find(i) << std::endl;
    }


}