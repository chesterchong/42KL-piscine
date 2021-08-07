/*
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_out(int a)
{
    int size;
    int backup;

    size = 1;
    if (a < 0)
    {
        ft_putchar('-');
        a *= -1;
    }
    if (a == -2147483648)
    {
        ft_putchar('2');
        a = 147483648;
    }
    backup = a;
    while((a /= 10) > 0)
    {
        size *= 10;
    }
    while(size)
    {
        ft_putchar((char)(backup / size) + '0');
        backup %= size;
        size /= 10;
    }
}
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main(void)
{
	int a;

	a = 12;
	ft_ft(&a);
	ft_print_out(a);
}
*/
