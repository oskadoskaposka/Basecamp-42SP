#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char letter_space[] = "aqui so tem letra e espaço";
	char letter[] = "aquiSoLetras";
	char letter_number[] = "aquiletranumero1234";
	char letter_space_number[] = "aqui tem letra e numero e espaco 1234";
	char letter_void[10];

	printf("Letter space, deveria retornar 0 e retorna %d", ft_str_is_alpha(letter_space));
	printf("\n");
	printf("Letter, deveria retornar 1 e retorna %d", ft_str_is_alpha(letter));
	printf("\n");
	printf("Letter number, deveria retornar 0 e retorna %d", ft_str_is_alpha(letter_number));	
	printf("\n");
	printf("Letter space number, deveria retornar 0 e retorna %d", ft_str_is_alpha(letter_space_number));
	printf("\n");
	printf("Letter void, deveria retornar 1 e retorna %d", ft_str_is_alpha(letter_void));
	printf("\n");
}