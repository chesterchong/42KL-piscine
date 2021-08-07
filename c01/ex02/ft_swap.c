#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 8;
	ft_swap(&a, &b);
	printf("%d\n%d\n",a ,b);
}
