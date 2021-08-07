/*
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print(int nbr)
{
    int size;
    int backup;

    size = 1;
    if(nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }

    if(nbr == -2147483648)
    {
        ft_putchar('2');
        nbr = 147483648;
    }

    backup = nbr;
    while((backup /= 10) > 0)
    {
        size *= 10;
    }

    while(size)
    {
        ft_putchar((char)(nbr / size) + '0');
        nbr %= size;
        size /= 10;
    }
}
*/
void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main(void)
{
    int a;
    int b;

    a = 12;
    b = 24;
    ft_swap(&a, &b);
    ft_print(a);
    ft_putchar('\n');
    ft_print(b);
}
*/
