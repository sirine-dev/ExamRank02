/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:57:46 by sirine            #+#    #+#             */
/*   Updated: 2023/09/26 14:58:00 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int nb;
    int neg;
    int i;

    neg = 1;
    nb = 0;
    i = 0;

    while (str[i])
    {
        if (str[i] == '\t' || str[i] == ' ')
            i++;
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
            {
                neg = -1;
                i++;
            }      
        }
        while (str[i] && str[i] >= '0' && str[i] <= '9')
        {
            nb = nb * 10 + (str[i] - '0');
            i++;
        }
        i++;
    }
    return (nb * neg);
}

int main()
{
    printf("%d", ft_atoi("      123456789"));
}
