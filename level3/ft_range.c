#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start) + 1);
	int *tab;
	
	tab = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			tab[i] = start;
			start++;
			i++;
		}
		else
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
        return (tab);
}

int main(void)
{
	int i;

	i = 0;
	int *tab = ft_range(1, 3);
	while(i < 3)
	{
		printf("%i\n", tab[i]);
		i++;
	}
	return (0);
}