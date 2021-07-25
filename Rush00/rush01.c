#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int first_x)
{
	int	start_x;

	ft_putchar('/');
	start_x = 1;
	while (start_x++ < first_x)
	{
		if (start_x == first_x)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	last_line(int last_x)
{
	int	start_x;

	ft_putchar('\\');
	start_x = 1;
	while (start_x++ < last_x)
	{
		if (start_x == last_x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	mid_line(int x)
{
	int	start_x;

	ft_putchar('*');
	start_x = 1;
	while (start_x++ < x)
	{
		if (start_x == x)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush (int x, int y)
{
	int	start_y;

	start_y = 1;
	while (start_y <= y)
	{
		if (start_y == 1)
		{
			first_line(x);
		}
		if (start_y == y && start_y != 1)
		{
			last_line(x);
		}
		else if (start_y <= y && start_y != 1)
		{
			mid_line(x);
		}
		ft_putchar('\n');
		start_y++;
	}
}
