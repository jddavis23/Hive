#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void);

int main()
{
	ft_print_numbers();

	return (0);

}