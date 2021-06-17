#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n);

int main()
{

	int n;

	n = 7;
	
	ft_is_negative(n);

	return (0);
}