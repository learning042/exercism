#include "difference_of_squares.h"

unsigned int     sum_of_squares(unsigned int number)
{
    /* 
    1^2 + 2^2 + 3^2 + ... + number^2 = S_2(number) (S_n(number) = sum from m = 1 to m = number of m^n)
    (a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3
    --> (a + 1)^3 = a^3 + 3a^2 + 3a + 1
    sum from m = 0 to m = number of (m + 1)^3 = S_3(number) + (number + 1)^3
    = S_3(number) + 3*S_2(number) + 3*S_1(number) + S_0(number)
    -->3S_2(number) = (number + 1)^3 - 3*S_1(number) - S_0(number)
    -->3S_2 = number^3 + 3number + 3number^2 - 3(number^2 + number) / 2 - number
    --> 3S_2 = number^3 + 3number^2 / 2 + number / 2 
    --> 6S_2 = 2number^3 + 3number^2 + number = number(number^2 + 3number + 1) = number(number + 1)(2number + 1) --> S_2 = number(number + 1)(2number + 1) / 6 
    */
    unsigned int    sum = number * (number + 1) * (2 * number + 1) / 6;
    return (sum);
}
unsigned int    square_of_sum(unsigned int number)
{
    /*
    1 + 2 + 3 + ... + number = (number + 1) + (number + 1) + ...{n / 2 times} 
                             = (number + 1) * number / 2 = S_1
    */
    unsigned int    sum = (number + 1) * number / 2;
    return (sum * sum);
}

unsigned int    difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}