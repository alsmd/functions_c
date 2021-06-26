/*
   @param *dest     (char) Ponteiro para o local onde a copia sera salva.
   @param *src      (char) Ponteiro para a string que sera copiada.
   @desc            Copia o conteudo de src em dest.
   @return          Retorna o endereço de dest.
*/
char    *ft_strcpy(char *dest, char *src)
{
    int index;

    index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}