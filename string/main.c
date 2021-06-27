#include <stdio.h>
#include "my_functions.h"

int main(void)
{
    char    *string = "minha famosa string";

    string = ft_strstr_rep(string, "famosa", "boba");
        printf("%s \n", string);
    //minha boba string
    return (0);
}
