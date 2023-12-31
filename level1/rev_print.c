/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:58:24 by sirine            #+#    #+#             */
/*   Updated: 2023/09/26 15:16:35 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int	argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}