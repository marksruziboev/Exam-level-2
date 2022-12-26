#include <unistd.h>
/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/
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
