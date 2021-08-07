#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}

int	main(void)
{
	int tab[7] = {1,2,3,4,5,6,7};
	printf("%d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1],tab[2], tab[3], tab[4], tab[5], tab[6]);
	ft_rev_int_tab(tab, 7);
	printf("%d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1],tab[2], tab[3], tab[4], tab[5], tab[6]);
}
