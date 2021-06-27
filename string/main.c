#include <stdio.h>
#include "my_functions.h"

int main(void)
{
    char    string[] = "flavio";
    int     index;

    index = ft_strspn(string, "ialvf");
    printf("%c \n", string[index]);
    printf("%d \n", index);
    return (0);
}
