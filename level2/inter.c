#include <unistd.h>

void    ft_inter(char *s1, char *s2)
{
    int ascii[256] = {0};
    int i;
    int j;

    i = 0;
    j = 0;
    while(s1[i])
    {
        while(s2[j])
        {
            if (s1[i] == s2[j] && ascii[(int)s1[i]] == 0)
            {
                ascii[(int)s1[i]] = 1;
                write(1, &s1[i], 1);
            }
            j++;
        }
        j = 0;
        i++;
    }
} 

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1], argv[2])
    write(1, "\n", 1);
    return (0);
}