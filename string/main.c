#include <stdio.h>
#include "my_functions.h"

int main(void)
{
    char    string[] = "minha famosa string";

    ft_strstr_rm(string, "amo");
    printf("%s \n", string);
    return (0);
}
