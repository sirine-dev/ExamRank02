#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 1;
	while (i <= 8)
	{
        if (octet & 128)
            write(1, "1", 1);
        else
            write (1, "0", 1);
        octet = octet << 1;
        i++;
    }
}

int main(int argc, char **argv)
{
	print_bits(argv[1][0]);
}
