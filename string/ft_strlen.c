#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

int ft_strlen(char *string)
{
    int len;

    len = 0;
    while (string[len] != '\0')
        len++;
    return (len);
}