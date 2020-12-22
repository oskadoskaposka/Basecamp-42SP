#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char teste[] = "abbbbddd";
	char destino[100];

	printf("O valor do teste é %s", teste);
	printf("\n");
	printf("O valor do destino é %s", ft_strcpy(destino, teste));
	printf("\n");
}
