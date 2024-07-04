#include <unistd.h>

void	ft_print_alphabet(void)
{
	char z;
	z = 'a';
	while(z<='z')
	{
		write(1, &z, 1);
		z++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

