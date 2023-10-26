#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	printf("%d\n", lcm(10, 6));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}

