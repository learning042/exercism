#include "perfect_numbers.h"

int    classify_number(int    number)
{
    int sum = 0;
    if (number <= 0)
        return ERROR;
    for (int factor = 1; factor < number; factor++)
    {
        if (number % factor == 0)
            sum += factor;
    }
    if (sum > number)
        return ABUNDANT_NUMBER;
    else if (sum < number)
        return DEFICIENT_NUMBER;
    return PERFECT_NUMBER;
}