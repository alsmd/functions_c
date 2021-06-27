#include <stdlib.h>
#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

char    *ft_strdup(char *s)
{
    int     len;
    char    *string_dup;

    len = ft_strlen(s);
    string_dup = (char *) malloc((len * 1) + 1);
    ft_strcpy(string_dup, s);
    return string_dup;
}