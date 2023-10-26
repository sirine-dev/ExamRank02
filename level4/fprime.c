#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    if(argc == 2)
    {
        int i = 1;
        number = atoi(argv[1]);
        if(number == 1)
            printf("1");
        while(number >= ++i)
        {
            if(number % i == 0)
            {
                printf("%d", i);
                if (number == i)
                    break;
                number /= i;
                printf("*");
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}
