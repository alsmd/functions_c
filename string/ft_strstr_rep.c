#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

char    *ft_strstr_rep(char *str, char *old, char *new)
{
    char    *temp_str;
    int     index;
    int     x;
    int     found;

    index = 0;
    temp_str = 0;
    while (str[index] != '\0')
    {
        found = 1;
        x = 0;
        while (old[x] != '\0')
        {
            if (str[index + x] != old[x])
                found = 0;
            x++;
        }
        if (found)
        {
            temp_str = ft_string_rep(str, index, index + x, new);
            break;    
        }
        index++;
    }
    return (temp_str);
}