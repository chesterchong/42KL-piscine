#include <unistd.h>

void	ft_putnbr (int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ch = nb % 10 + '0';
	write(1, &ch, 1);
}
