#include <stdarg.h>
#include <unistd.h>
/*
    Apenas %d com 1 digito
*/
void    ft_printf(char  *string, ...)
{
    int     index;
    char    temp_val;
    va_list ptr;

    index = 0;
    va_start(ptr, string);
    while (string[index] != '\0')
    {
        if (string[index] == '%' && string[index + 1] == 'd')
        {
            temp_val = va_arg(ptr, int) + 48;
            write(1, &temp_val, 1);
            index += 2;
            continue ;
        }
        write(1, &string[index], 1);
        index++;
    }
    va_end(ptr);
}