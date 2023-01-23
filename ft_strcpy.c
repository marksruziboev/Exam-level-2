#include <unistd.h>

void	ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] ='\0';
    return(s1);
}

int main()
{
    char s2[10] = "012345678";
    char s1[10];
    ft_strcpy(s1, s2);
    ft_putstr(s1);
    return(0);
}
