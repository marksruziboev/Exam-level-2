#inlude<unistd.h>
/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/
int	ft_strlen(char *str)
{
    int k;

    k = 0;
    while(str[k])
        k++;
    return(k);
}
