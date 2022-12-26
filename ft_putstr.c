#include<unistd.h>
#include<string.h>
/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/
void	ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}
/* an alternative solution
void	ft_putstr(char *str)
{
	int	i = -1;

	while (str[i++])
		write(1, &str[i], 1);
}*/
int main ()
{
    char b[11] = "0123456789a";

    ft_putstr(b);
    write(1, "\n", 1);
    return(0);
}
