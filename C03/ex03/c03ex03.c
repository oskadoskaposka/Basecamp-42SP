#include <stdio.h>
char    *ft_strncat(char *dest, char *src, unsigned int nb);

int        main(void)
{
    char str1[20] = "Olá!";
    char str2[11] = " Tudo bem?";

    printf("Antes:%s\n", str1);
    ft_strncat(&str1[0], &str2[0], 2);
    printf("Depois:%s\n", str1);    
    return (0);
}