#include<unistd.h>
/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
int main(int c, char **v)
{
    int j, i = 0;
    if (c == 2)
    {
        while (v[1][i])
        {
            if (v[1][i] >= 'A' && v[1][i] <= 'Z')
            {
                  j = 0;
                  while (j < 1 + v[1][i] - 'A')
                  {
                      write(1, &v[1][i], 1);
                      j++;
                  }
            }
            else if (v[1][i] >= 'a' && v[1][i] <= 'z')
            {
                  j = 0;
                  while (j < 1 + v[1][i] - 'a')
                  {
                      write(1, &v[1][i], 1);
                      j++;
                  }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);

}
