#include <stdio.h>
#include "my_functions.h"

int main(void)
{
    char    string[] = "flavio";
    char    *dup;

    dup = ft_strdup(string);
    string[0] = 'D';
    printf("%s \n", dup);
    printf("%s \n", string);
    return (0);
}
