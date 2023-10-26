/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirine <sirine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:58:21 by sirine            #+#    #+#             */
/*   Updated: 2023/09/19 12:10:34 by sirine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:55:21 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/14 14:59:21 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = letter_count(argv[1][i]);
			while(repeat--)
				write(1, argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}