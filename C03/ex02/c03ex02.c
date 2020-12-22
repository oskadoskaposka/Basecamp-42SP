#include <stdio.h>
char	*ft_strcat(char *dest, char *src);

int        main(void)
{
    char PRIMEIRA[] = "Olá!";
    char SEGUNDA[] = " Bom Dia!";

    printf("Antes:%s\n", PRIMEIRA);
    ft_strcat(PRIMEIRA, SEGUNDA);
    printf("Depois:%s\n", PRIMEIRA);    
    return (0);
}
