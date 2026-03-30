#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length)
{
    size_t    mid = length / 2;
    
    if (length == 0)
        return NULL;
    if (value > arr[length / 2])
        return binary_search(value, arr + mid + 1, length - mid - 1);
    if (value < arr[length / 2])
        return binary_search(value, arr, mid);
    return arr + length / 2;
}
