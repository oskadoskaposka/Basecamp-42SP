#include <stdio.h>

void ft_is_negative(int n);

int main(void)
{
	int i;
	int j;
	int k;

	i = -10;
	j = 10;
	k = 0;

	printf("\n O valor de i deve ser 'N' e é");
	ft_is_negative(i);
	printf("\n O valor de j deve ser 'P' e é");
	ft_is_negative(j);
	printf("\n O valor de k deve ser 'P' e é");
	ft_is_negative(k);
}