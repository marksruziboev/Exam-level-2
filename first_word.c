#include<unistd.h>

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
