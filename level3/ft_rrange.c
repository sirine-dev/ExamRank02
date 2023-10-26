#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int len = (end - start) + 1;
	int *tab;

	if (start > end)
		return (ft_rrange(end, start));
	tab = (int *)malloc(sizeof(int) * len);
	if (tab)
	{
		while (i < len)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	return (tab);
}
 