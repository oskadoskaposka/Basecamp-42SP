#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char texto[] = "LES AUUAUAUHUAHHAUHDUHSA AUSHDIUASDHUI";
	int teste;

	teste = ft_strlen(texto);
	printf("o tamanho da string é %d", teste);
	printf("\n");
	return (0);
}