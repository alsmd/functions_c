/*
    @char *string : string a qual o tamanho sera analizado.
    @return :       retorna o tamanho de *string sem contar o '\0'.
*/
int ft_strlen(char *string)
{
    int len;

    len = 0;
    while (string[len] != '\0')
        len++;
    return (len);
}