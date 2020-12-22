#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char teste[100];
	char destino[100];

	printf("O valor do teste é %s", ft_strncpy(teste, "Hello World", 11));
	printf("\n");
	printf("O valor do destino é %s", ft_strncpy(destino, teste, 9));
	printf("\n");
}