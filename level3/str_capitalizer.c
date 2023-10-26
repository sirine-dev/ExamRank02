#include <unistd.h>


void    rstr_capitalizer(char *str)
{
    int i= 0;

    while (str[i])
    {
        while (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        while (str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;
        while ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] =='\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
    
}

int main(int argc, char **argv)
{
    int i = 1;
    if (argc >= 2)
    {
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}