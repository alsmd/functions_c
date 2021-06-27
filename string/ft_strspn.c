#ifndef MY_FUNCTIONS
#include "my_functions.h"
#endif

int ft_strspn(char *s, char *accept)
{
    int len;
    int x;
    int acess;

    len = 0;
    while (s[len] != '\0')
    {
        acess = 1;
        x = 0;
        while (accept[x] != '\0')
        {
            if (s[len] == accept[x])
                acess = 0;
            x++;
        }
        if (acess)
            return (len);
        len++;
    }
    return (len);
}
