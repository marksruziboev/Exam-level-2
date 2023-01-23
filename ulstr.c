#include<unistd.h>
#include<string.h>

int main(int c, char **v)
{
    int i;
    i = 0;
    if (c ==2)
    {
        while(v[1][i] != '\0')
        {
            if(v[1][i] >= 'A' && v[1][i] <= 'Z')
                v[1][i] = v[1][i] + ('a' - 'A');
            else if (v[1][i] >= 'a' && v[1][i] <= 'z')
                v[1][i] = v[1][i] + 'A' - 'a';
            write(1, &v[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
