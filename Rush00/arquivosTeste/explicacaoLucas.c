#include <unistd.h>
#include <stdio.h>

int teste = 80;

int	main () {
	//   (Formato de saida da informação, MSG QUE QUERO ESCREVER, QTD BYTES/BIT) 
	write(1, &teste, 1);
	return (0);
}

