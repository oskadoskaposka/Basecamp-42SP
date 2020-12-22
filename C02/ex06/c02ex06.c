#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char raity[] = "012asd";
	char urong[] = "\na\n";

	printf("o valor de raity deve ser 1 e é %d", ft_str_is_printable(raity));
	printf("\n");
	printf("o valor de urong deve ser 0 e é %d", ft_str_is_printable(urong));
	printf("\n");
	return (0);
}