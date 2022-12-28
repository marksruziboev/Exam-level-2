/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/
#include<unistd.h>

/*int main(int c, char **v)
{
    int i = 0;

    if (c == 2)
    {
        while (v[1][i])
        {
            if ((v[1][i] >= 'a' && v[1][i] <= 'z')|| (v[1][i] >= 'A' && v[1][i] <= 'Z'))
                v[1][i] = (v[1][i] + 1) % 26;
            write(1, &v[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}*/
int main()
{
    int i = 0;
    char v[20] = "zaZA";
    while (v[i])
    {
            if (v[i] >= 'a' && v[i] <= 'z')
                v[i] = (v[i] - 'a' + 1) % 26 + 'a';
            else  if  (v[i] >= 'A' && v[i] <= 'Z')
                v[i] =  (v[i] - 'A' + 1) % 26 + 'A';
            write(1, &v[i], 1);
            i++;
    }
    write(1, "\n", 1);
    return(0);
}


