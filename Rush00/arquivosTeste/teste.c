#include <unistd.h>
//tema
void	tema(int tema_escolhido) {
	if (tema_escolhido == 00){
		...
	}

}

//putchar
void	ft_putchar (char letra) {
	write(1, &letra, 1);
}

void	compor_horizontal (char letraInicioX, char letraMeioX, char letraFimX, int variavelX) {

	if ( variavelX > 0 ) {
		ft_putchar ( letraInicioX );
		if ( variavelX == 1 ) {
			ft_putchar ( '\n' );
		}
	}

	int	contadorX = 2;

	while ( contadorX <= variavelX ) {

		if ( contadorX < variavelX ) {
			ft_putchar ( letraMeioX );
			contadorX ++;
		}

		else if ( contadorX == variavelX ) {
			ft_putchar ( letraFimX );
			ft_putchar ( '\n' );
			contadorX++;
		}
	}
}

//rush com include na putchar
void	rush (int x, int variavelY) {

	if ( variavelY > 0 ) {

		compor_horizontal ('*' , '-' , '*' , x);

		int contadorY = 2;

		while (contadorY <= variavelY) {

			if (contadorY < variavelY) {
				compor_horizontal ('|' , ' ' , '|' , x);
				contadorY++;
			}

			else if (contadorY == variavelY) {
				compor_horizontal ( '*' , '-' , '*' , x );
				contadorY++;
			} 
		}
	}
}

//main com include na rush
int	main (void) {
	tema(00)
	rush ( 4, 1 );
	return ( 0 );
}