#include <stdlib.h>
#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif
/*
    @char *s :      String que sera copiada.
    @descrição :    Copia o conteudo de *s para um local dinamico na memoria
                    e retorna um ponteiro para esse novo endereço.
    @return :       Ponteiro para a nova string.
*/

char    *ft_strdup(char *s)
{
    int     len;
    char    *string_dup;

    len = ft_strlen(s);
    string_dup = (char *) malloc(len * 1);
    ft_strcpy(string_dup, s);
    return string_dup;
}