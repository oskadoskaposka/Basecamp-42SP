#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char num_only[] = "0123";
	char num_letter[] = "0123abc";
	char letter_only[] = "abcd";
	char num_space[] = "012 34";
	char num_void[10];

	printf("num only, deve retornar 1 e retorna %d", ft_str_is_numeric(num_only));
	printf("\n");
	printf("num letter, deve retornar 0 e retorna %d", ft_str_is_numeric(num_letter));
	printf("\n");
	printf("letter only, deve retornar 0 e retorna %d", ft_str_is_numeric(letter_only));
	printf("\n");
	printf("num space, deve retornar 0 e retorna %d", ft_str_is_numeric(num_space));
	printf("\n");
	printf("num void, deve retornar 1 e retorna %d", ft_str_is_numeric(num_void));
	printf("\n");
}