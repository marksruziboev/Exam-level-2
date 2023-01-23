
#include<unistd.h>

int main(int c, char **v)
{
    int i;

    i = 0;
    if (c == 4 && !v[2][1] && !v[3][1]) //
    {
        while(v[1][i] != '\0')
        {
            if (v[1][i] == v[2][0])
                v[1][i] = v[3][0];
            write(1, &v[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
