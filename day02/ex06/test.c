#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);

int main()
{
	int nb;

	nb = 13;

	ft_putnbr(nb);

	return (0);
}