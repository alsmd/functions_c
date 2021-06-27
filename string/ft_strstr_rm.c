#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

char    *ft_strstr_rm(char *string, char *sub_string)
{
    int index;
    int x;
    int found;

    index = 0;
    while (string[index] != '\0')
    {
        found = 1;
        x = 0;
        while (sub_string[x] != '\0')
        {
            if (string[index + x] != sub_string[x])
                found = 0;
            x++;
        }
        if (found)
        {
            ft_string_rm(string, index, index + x);
            break ;
        }
        index++;
    }

    return (string);
}
