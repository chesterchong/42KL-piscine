/*

Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

*/

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            return (0);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

/*

#include <stdio.h>

int main(void)
{
    char *a1;
    char *a2;

    a1 = "a          ";
    a2 = "ab          ";
    printf("%d\n",ft_strcmp(a1, a2));
}

*/
