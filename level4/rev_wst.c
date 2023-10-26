/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:38:15 by sirine            #+#    #+#             */
/*   Updated: 2023/10/26 15:09:45 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rev_wstr(char *str)
{
	int i = 0;
	int j;
	int first_word = 1;

	while (str[i])
		i++;
	while(i >= 0)
	{
		while (i >= 0 && str[i] == ' ' || str[i] == '\0' || str[i] == '\t')
			i--;
		j = i;
		while (j >= 0 &&  str[j] != ' ' && str[j] != '\t')
			j--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, i - j);
		first_word = 0;
		i = j;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}






























/*int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
		
	if(argc == 2)
	{   
		while(argv[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			end = i;
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			int  flag;
			flag = start;
			while(start <= end)
			{
				write (1, &argv[1][start],1);
				start++;		
			}
			if (flag !=0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);........................................................................
}*/