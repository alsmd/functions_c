#define MY_FUNCTIONS 1
/*
    @param *str     string que sera invertida.
    @desc           Inverte a string passada como parametro e retorna um ponteiro para mesma.
    @return         retorna um ponteiro para *str ja invertida.
*/
char    *ft_str_rev(char *str);

//***************************//

/*
    @param *string  string a qual o tamanho sera analizado.
    @return         retorna o tamanho de *string sem contar o \\0.
*/
int ft_strlen(char *string);

//***************************//

/*
   @param *dest     (char) Ponteiro para o local onde a copia sera salva.
   @param *src      (char) Ponteiro para a string que sera copiada.
   @desc            Copia o conteudo de src em dest.
   @return          Retorna o endereço de dest.
*/
char    *ft_strcpy(char *dest, char *src);

//***************************//

/*
    @param *s   (char) String que sera copiada.
    @desc       Copia o conteudo de *s para um local dinamico na memoria
                e retorna um ponteiro para esse novo endereço.
    @return     Ponteiro para a nova string.
*/
char    *ft_strdup(char *s);

//***************************//

/*
    @param *s           (char) string onde a analize sera realizada.
    @param  *accept     (char) padrão que sera testado.
    @desc               analiza cada caracter e verifica se ele esta entre os aceitos,
                        caso não esteja ira ser retornado seu indice.
    @return             retorna o indice da primeira ocorrencia de um caracter fora de *accept.
                        Retorna o length de *s caso todos os caracteres estejam em *accept
*/
int ft_strspn(char *s, char *accept);

//***************************//

/*
   @param *string           (char) string que sera analizada.
   @param *sub_string       (char) sub_string que sera procurada e removida em *string.
   @desc                    ira procurar a ocorencia de uma substring e deleta-la da string principal
   @return                  retorna o endereço de *string, já com seu valor modificado.
*/
char    *ft_strstr_rm(char *string, char *sub_string);

//***************************//

/*
    @param *string      string que sera analizada.
    @param begin        apartir de qual indice a remoção sera realizada (incluindo begin).
    @param end          ate a onde a remoção sera realizada (excluindo end).
    @desc               ira remover uma parte da string com base em um intervalo de indices.
    @return             (void)

*/
void    ft_string_rm(char *string, int begin, int end);

//***************************//

/*
    @param *str     (char) string que sera analizada.
    @param *old     (char) sub_string que sera removida.
    @param *new     (char) nova sub_string que sera colocada no lugar da antiga.
    @desc           substitui a primeira ocorrencia de uma substring por outra, salvando essa
                    alteração em uma nova string criada dinamicamente.
    @return         retorna um ponteiro para uma nova string com a substring substituida.
                     Retorna 0 caso a substring não for encontrada.
                     O valor retornado foi criado atraves do malloc, utilizar o free quando a string não for mais necessaria.
*/
char    *ft_strstr_rep(char *str, char *old, char *new);

//***************************//

/*
    @param *str     (char) string que sera analizada.
    @param *start   (int) aonde o corte ira começar (incluindo start).
    @param *end     (int) aonde o corte ira terminar (excluindo end).
    @param *new     (char) sub_string que sera colocada no lugar de *start ate *end.
    @desc           apaga uma substring presente entre o indice *start e *end e coloca *new no local 
    @return         retorna um ponteiro para uma nova string com as alterações realizadas.
                     Retorna 0 caso start ou end tiver um valor invalido. 
                    O valor retornado foi criado atraves do malloc, utilizar o free quando a string não for mais necessaria.
*/
char    *ft_string_rep(char *str, int start, int end, char *new);

//***************************//


