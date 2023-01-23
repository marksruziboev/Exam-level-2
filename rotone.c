#include<unistd.h>

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
