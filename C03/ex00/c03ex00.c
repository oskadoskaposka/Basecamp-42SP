#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int        main(void)
{
    printf(" 0 Igual %d\n", ft_strcmp("ABC", "ABC"));
    printf(" 1 Maior %d\n", ft_strcmp("ABC", "AB "));
    printf("-1 Menor %d\n", ft_strcmp("ABA", "ABZ"));
    return (0);
}