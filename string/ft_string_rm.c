#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

void    ft_string_rm(char *string, int begin, int end)
{
    while (string[end] != '\0')
    {
        string[begin] = string[end];
        end++;
        begin++;
    }
    string[begin] = '\0';
}
