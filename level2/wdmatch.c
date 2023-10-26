#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while(s2[j])
	{
		if(s2[j] == s1[i])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		ft_putstr(s1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n",1);
	return 0;
}
