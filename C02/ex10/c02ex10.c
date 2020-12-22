#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void){
	char caso[65] = "tesdfrtdhednt\0";
	char caso2[1];
    
    printf("%u\n", ft_strlcpy(caso2, caso, 8));
}