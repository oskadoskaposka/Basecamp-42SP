#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
  	int *********nbr;
    int ********a;
    int *******b;
    int ******c;
    int *****d;
    int ****e;
    int ***f;
    int **g;
    int *h;
    int i;

    i = 1;
    nbr = &a;
    a = &b;
    b = &c;
    c = &d;
    d = &e;
    e = &f;
    f = &g;
    g = &h;
    h = &i;
    ft_ultimate_ft(nbr);
	printf(" O valor de a tem que ser 42 e é %d", i);
	printf("\n");
    return (0);
}
