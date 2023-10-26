/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:51:21 by sirine            #+#    #+#             */
/*   Updated: 2023/10/11 17:57:19 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (int ac , char **av)
{
	int i = 0;
	int j;

	if (ac >= 2)
	{
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t')) // search space skip.
				i++;
			j = i; // this is the postion for print the first word after.
			while (av[1][i])
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')) // pass the first word.
					i++;
				while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t')) // find the next word.
					i++;
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t') && (av[1][i -1] == ' ' || av[1][i - 1] == '\t')) // print the word till it reaches last.
				{
					while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
					{
						write (1, &av[1][i], 1);
						i++;
					}
					write (1, " ", 1);
					i++;
				}
			}
			while (av[1][j] && (av[1][j] != ' ' && av[1][j] != '\t')) // print the first word now.
			{
				write (1, &av[1][j], 1);
				j++;
			}
	}
	write (1, "\n", 1);
}
