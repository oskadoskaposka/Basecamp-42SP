#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *s1 = "bbbbbb";
    char *s2 = "bbbbbb";
    unsigned int n = 15;

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2,n));

    s1 = "bbbbba";
    s2 = "bbbbbc";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2,n));

    s1 = "bbbbbd";
    s2 = "bbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2, n));

    s1 = "bbbbbbe";
    s2 = "bbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2, n));

    n=6;

    s1 = "bbbbbbb";
    s2 = "bbbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2,n));

    s1 = "bbbbba";
    s2 = "bbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2,n));

    s1 = "bbbbbbc";
    s2 = "bbbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2, n));

    s1 = "bbbbbbd";
    s2 = "bbbbbb";

    printf ("%d retornado \n", ft_strncmp (s1, s2, n));
    printf ("se %d returnado, bom. \n\n", strncmp(s1,s2, n));
}