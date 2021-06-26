#define MY_FUNCTIONS 1
/*
    @char *str :    string que sera invertida.
    @Descrição :    Inverte a string passada como parametro e retorna um ponteiro para mesma.
    @Return :       retorna um ponteiro para *str ja invertida.
*/
char    *ft_str_rev(char *str);

//***************************//

/*
    @char *string : string a qual o tamanho sera analizado.
    @return :       retorna o tamanho de *string sem contar o '\0'.
*/
int ft_strlen(char *string);

//***************************//

/*
   @char *dest :    Ponteiro para o local onde a copia sera salva.
   @char *src :     Ponteiro para a string que sera copiada.
   @descrição :     Copia o conteudo de src em dest.
   @return :        Retorna o endereço de dest.
*/
char    *ft_strcpy(char *dest, char *src);

//***************************//

/*
    @char *s :      String que sera copiada.
    @descrição :    Copia o conteudo de *s para um local dinamico na memoria
                    e retorna um ponteiro para esse novo endereço.
    @return :       Ponteiro para a nova string.
*/
char    *ft_strdup(char *s);

//***************************//
