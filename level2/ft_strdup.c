/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sirine <sirine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:58:06 by sirine            #+#    #+#             */
/*   Updated: 2023/09/27 20:59:17 by sirine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	    i = 0;
	int	    len = 0;
	char	*str_temp;

	while (src[len])
		len++;
	str_temp = malloc(sizeof(*str_temp) * (len + 1));
	if (str_temp != NULL)
	{
		while (src[i])
		{
			str_temp[i] = src[i];
			i++;
		}
		str_temp[i] = '\0';
	}
	return (str_temp);
}