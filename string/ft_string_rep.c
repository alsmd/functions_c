#include <stdlib.h>
#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif
int verify_ft_string_rep(char *str, int start, int end);

char    *ft_string_rep(char *str, int start, int end, char *new)
{
    char            *temp_str;
    int    new_len;
    int    index;

    if (!verify_ft_string_rep(str, start, end))
    {
        return (0);
    }
    new_len = (ft_strlen(str) - (end - start)) + ft_strlen(new);
    temp_str = (char *) malloc((new_len * 1) + 1);
    index = 0;
    while (index < start)
    {
        temp_str[index] = str[index];
        index++;
    }
    while (*new != '\0')
    {
        temp_str[index] = *new;
        new++;
        index++;
    }
    while (str[end] != '\0')
    {
        temp_str[index] = str[end];
        end++;
        index++;
    }
    temp_str[index] = '\0';

    return (temp_str);
}

int verify_ft_string_rep(char *str, int start, int end)
{
    if (start > end || start >= ft_strlen(str) || end >= ft_strlen(str))
        return (0);
    if (start < 0 || end < 0)
        return (0);
    if (start == end)
        return (0);
    return (1);
}