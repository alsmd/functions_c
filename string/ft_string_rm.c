/*
    @param *string      string que sera analizada.
    @param begin        apartir de qual indice a remoção sera realizada (incluindo begin).
    @param end          ate a onde a remoção sera realizada (excluindo end).
    @desc               ira remover uma parte da string com base em um intervalo de indices.
    @return             (void)

*/
void    ft_string_rm(char *string, int begin, int end)
{
    while (string[end] != '\0')
    {
        string[begin] = string[end];
        end++;
        begin++;
    }
    string[begin] = '\0';
}
