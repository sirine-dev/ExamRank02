/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirine <sirine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:58:26 by sirine            #+#    #+#             */
/*   Updated: 2023/09/19 22:36:26 by sirine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			ft_putchar(rot_13(argv[1][i]));
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
