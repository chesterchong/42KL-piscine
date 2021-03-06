/*

Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param it is at this moment jackson knew | cat -e
it$
$> ./aff_first_param "I bet you can't print me" | cat -e
I bet you can't print me$
$> ./aff_first_param | cat -e
$

*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        while (*argv[1])
        {
            write(1, argv[1], 1);
            argv[1]++;
        }
    }
    write(1, "\n", 1);
}
