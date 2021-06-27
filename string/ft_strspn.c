/*
    @param *s           (char) string onde a analize sera realizada.
    @param  *accept     (char) padrão que sera testado.
    @desc               analiza cada caracter e verifica se ele ta entre os aceitos,
                        caso não esteja ira retornar seu indice sera retornado
    @return             retorna o indice da primeira ocorrencia de um caracter fora de *accept.
                        Retorna o length de *s caso todos os caracteres estejam em *accept
*/
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
