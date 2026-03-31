#include "binary.h"
#include <string.h>

int convert(const char *input)
{
    int    i = 0;
    int    number = 0; 
    
    while (input[i] != '\0')
    {
        if (input[i] != '0' && input[i] != '1')
            return (INVALID);
        number = number * 2 + (input[i] - '0');
        i++;
    }
    return (number);
}