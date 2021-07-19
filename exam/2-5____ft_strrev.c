char *ft_strrev(char *str)
{
    int length;
    int i;

    char ch;

    length = 0;
    while(str[length])
    {
        length++;
    }

    i = -1;
    while(--length > ++i)
    {
        ch = str[i];
        str[i] = str[length];
        str[length] = ch;
    }

    return (str);
}

/* test
#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    while(argc > ++i)
    {
        ft_putstr(ft_strrev(argv[i]));
        write(1, "\n", 1);
    }

    return (0);
}
*/
