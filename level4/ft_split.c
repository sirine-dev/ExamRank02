/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:21:03 by sirine            #+#    #+#             */
/*   Updated: 2023/10/26 15:09:29 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **split;

	i = 0;
	j = 0;
	if (!(split = (char **)malloc(sizeof(char *)) * 256))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (!(split[k] = (char *)malloc(sizeof(char)) * 4096))
			return (NULL);
		j = 0;
		while (str[i] != ' ' && str[i] != '\t')
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}


int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("    The prophecy i s 	true lol 		   ici");
	while (i < 7)
	{
		printf("String %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}