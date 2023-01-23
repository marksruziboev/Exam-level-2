#include<unistd.h>
/*
This program takes a string and displays its first word, followed by a
newline.

Here were by a word means a section of a string bounded by spaces and/or tabs or by the beginning or the end of
the string.

In case the number of parameters is not 1, or if there are no words, the program should display
a newline.
*/
int main(int c, char  **v)
{
    int k;
    k = 0;
    if (c == 2)
    {
        while(v[1][k] &&( v[1][k] == '\t' || v[1][k] == ' '))
            k++;
        while(v[1][k] || v[1][k] != '\t' || v[1][k] != ' ')
        {
           write(1, &v[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
