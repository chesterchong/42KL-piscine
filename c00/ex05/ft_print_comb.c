#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_print (int a, int b, int c)
{
	ft_putchar (a);
	ft_putchar (b);
	ft_putchar (c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb (void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		while (b < '9')
		{
			while (c < ('9' + 1))
			{
				ft_print(a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}
