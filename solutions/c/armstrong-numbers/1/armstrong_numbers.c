#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate)
{
    // number of digits
    int    n_digits = num_digits(candidate);
    // copy of candidate
    int    cp_candidate = candidate; 

    if (n_digits < 1)
        return false;
    int    sum = 0;
    int    digit = 0;
    while (cp_candidate > 0)
    {
        // last digit
        digit = cp_candidate % 10;
        
        // sum += digit^(number of digits)
        sum += power(digit, n_digits); 
        
        // getting rid of last digit
        cp_candidate /= 10; 
    }
    if (candidate == sum)
        return true;
    return false;
}

double    power(int num, int exp)
{
    if (exp == 0)
        return 1;
    if (num == 0)
        return 0;
    return (num * power(num, exp - 1));
}

int    num_digits(int    number)
{
    if (number < 0)
        return -1;
    if (number >= 0 && number <= 9)
        return 1;
    return (1 + num_digits(number / 10));
}