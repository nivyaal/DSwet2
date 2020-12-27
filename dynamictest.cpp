#include "DynamicArray.h"

int main()
{
    DynamicArray<int> arr(8);
    for (int i = 0; i < 100; i++)
    {
        arr.push(i);
        std::cout << "Array size :" << arr.getSize() << std::endl;
    }
}