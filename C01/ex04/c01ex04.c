
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;

	a = 104;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("O resultado da div (a) é %d", a);
	printf("\n");
	printf("O resultado do mod (b) é %d", b);
	printf("\n");
}