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
    // find the size
    while((backup /= 10) > 0)
    {
        size *= 10;
    }

    // print out the integers

    while(size)
    {
        ft_putchar((char)(nbr / size) + '0');
        nbr %= size;
        size /= 10;
    }
}
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*

int	main(void)
{
	int	********* i;
	int	******** q;		
	int 	******* w;
	int 	****** e;
	int 	***** r;
	int 	**** t;
	int 	*** y;
	int 	** u;
	int     * p ;
	int  	nbr;

	i = & q;
	q = & w;
	w = & e;
	e = & r;
	r = & t;
	t = & y;
	y = & u;
	u = & p ;
	p = & nbr;

	nbr = 21 ;              
	ft_ultimate_ft(i);
	ft_print(nbr);
}
*/
