#include <stdio.h>

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	res = 0;
	unsigned		i = 8;

	while (i--)
	{
		res = (res << 1) | (res & 1);
		b >>= 1;
	}
	return (res);
}

int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
} 
