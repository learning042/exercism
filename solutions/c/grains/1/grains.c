#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index == 1)
        return 1;
    return (2 * square(index - 1));
}

uint64_t total(void)
{
    /*
    S_n = 1 + 2 + 4 + ... + 2^n
    S_n * 2 = 2 + 4 + ... + 2^(n + 1) 
    --> S_n = 2^(n + 1) - 1
    so S_64 = 1 + 2 + 4 + ... + 2^64 = 2^(65) - 1
    */
    
    return (square(65) - 1);
}