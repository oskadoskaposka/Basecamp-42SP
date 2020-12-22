#include <unistd.h>

void ft_putstr(char *str);

int main (void)
{
	char test[] = "Repetiu a string char por char!!";

	ft_putstr(test);
	write(1, "\n", 1);
}
