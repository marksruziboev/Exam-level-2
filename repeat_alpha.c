#include<unistd.h>

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
