#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char upper_only[] = "ABCDE";
	char upper_lower[] = "ABcdE";
	char upper_number[] = "ABCD123";
	char upper_space[] = "AB DE";
	char upper_void[15];

	printf("uper only, deve retornar 1 e retorna %d", ft_str_is_uppercase(upper_only));
	printf("\n");
	printf("uper lower, deve retornar 0 e retorna %d", ft_str_is_uppercase(upper_lower));
	printf("\n");
	printf("uper number, deve retornar 0 e retorna %d", ft_str_is_uppercase(upper_number));
	printf("\n");
	printf("uper space, deve retornar 0 e retorna %d", ft_str_is_uppercase(upper_space));
	printf("\n");
	printf("uper void, deve retornar 1 e retorna %d", ft_str_is_uppercase(upper_void));
	printf("\n");
}
