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
