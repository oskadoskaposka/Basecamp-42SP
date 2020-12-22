#include <stdio.h>

int ft_ft(int *nbr);

int	main(void)
{
	int a;
	
	a=12;
	ft_ft(&a);
	printf("O valor do pointer é %d", a);
	printf("\n");

	return (0);
}