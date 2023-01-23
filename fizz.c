#include <unistd.h>
void    ft_putnbr(int n)
{
    char  str[10] = "0123456789";
    char a;
    if (n > 9)
        ft_putnbr(n/10);
    else
    {
        a = str[n % 10];
        write(1, &a, 1);
    }
}
int     main()
{
    int k;
  //  char a;
   // char b;

    k = 0;
    while (++k <= 100)
    {
        if (k % 3 == 0 && k % 5 == 0)
            write (1, "fizzbuzz\n", 9);
        else if (k % 3 == 0)
            write (1, "fizz\n", 5);
        else if (k % 5 == 0)
            write (1, "buzz\n", 5);
        else
        {
           ft_putnbr(k);
           write(1, "\n", 1);
        }
        k++;
    }
    return(0);
}
