/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirine <sirine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:58:28 by sirine            #+#    #+#             */
/*   Updated: 2023/09/19 22:46:36 by sirine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *s)
{
	int 	i;
	char 	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Y')
			c = c + 1;
		else if (c == 'Z')
			c = 'A';
		if (c >= 'a' && c <= 'y')
			c = c + 1;
		else if (c == 'z')
			c = 'a';
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}