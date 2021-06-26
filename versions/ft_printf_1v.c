void ft_printf(char *string, int valor)
{
    int index;

    index = 0;
    valor += 48;
    while (string[index] != '\0')
    {
        if (string[index] == '%' && string[index + 1] == 'd')
        {
            write(1, &valor, 1);
            index += 2;
        }else
        {
            write(1, &string[index], 1);
            index++;
        }
    }

}
