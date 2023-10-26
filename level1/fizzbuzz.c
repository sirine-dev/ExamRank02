/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:58:11 by sirine            #+#    #+#             */
/*   Updated: 2023/09/26 15:06:36 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	write_nb(int nb)
{
	if (nb > 9)
		write_nb(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(void)
{
	int nb;

	nb = 1;	
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else
			write_nb(nb);
		write(1, "\n", 1);
		nb++;
	
	}
}