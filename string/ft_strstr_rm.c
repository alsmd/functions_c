#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif
/*
   @param *string           (char) string que sera analizada.
   @param *sub_string       (char) sub_string que sera procurada e removida em *string.
   @desc                    ira procurar a ocorencia de uma substring e deleta-la da string principal
   @return                  retorna o endereço de *string, já com seu valor modificado.
*/
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
