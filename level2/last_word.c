#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
		i++;
	i -= 1;
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i--;
	while ((argv[1][i] != ' ' && argv[1][i] != '\t') && i >= 0)
		i--;
	i += 1;
	while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}*/


