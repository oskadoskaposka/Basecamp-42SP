#include <stdio.h>
char    *ft_strcapitalize(char *str);
int main(void)
{
    char array[58] = "oi, tudo bem? 42palavras quar.ent.a-e-duas; cinquenta+e+um";
    printf("String: %s\n", ft_strcapitalize(array));
}