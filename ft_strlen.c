#inlude<unistd.h>

int	ft_strlen(char *str)
{
    int k;

    k = 0;
    while(str[k])
        k++;
    return(k);
} 
