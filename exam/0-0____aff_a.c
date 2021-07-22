/*

Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program diplays 'a' followed by a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a 'RaInB0w d4Sh!' | cat -e
a$
$> ./aff_a 'ThE C4k3 Is a L|3' | cat -e
a$
$> ./aff_a | cat -e
a$

*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "a\n", 2);
    }
    else if (argc == 2)
    {
        while (*argv[1])
        {
            if (*argv[1] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            argv[1]++;
        }
        write(1, "\n", 1);
    }
}
