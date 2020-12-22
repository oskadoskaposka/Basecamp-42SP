#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main (void)
{
	int a;
	int b;

	a = 12;
	b = 15;


	printf("O valor do A antes é %d", a);
	printf("\n");
	printf("O valor do B antes é %d", b);
	printf("\n");
	ft_swap(&a, &b);
	printf("O valor do A depois é %d", a);
	printf("\n");
	printf("O valor do B depois é %d", b);
	printf("\n");
	
}