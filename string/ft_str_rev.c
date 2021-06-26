#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif
/*
    @char *str :    string que sera invertida.
    @Descrição :    Inverte a string passada como parametro e retorna um ponteiro para mesma.
    @Return :       retorna um ponteiro para *str ja invertida.
*/
char    *ft_str_rev(char *str)
{
    int     min;
    int     max;
    char    holder;

    min = 0;
    max = ft_strlen(str) - 1;
    while (min < max)
    {
        holder = str[min];
        str[min] = str[max];
        str[max] = holder;
        min++;
        max--;
    }
    return (str);
}