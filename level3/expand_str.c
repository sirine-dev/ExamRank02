/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szenk <szenk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:34:54 by sirine            #+#    #+#             */
/*   Updated: 2023/10/09 15:01:41 by szenk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i] != '\0')
        {
            while(argv[1][i] != ' ' || argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            while (argv[1][i] == ' '  || argv[1][i] == '\t')
                i++;
            if (argv[1][i])
                write(1, " ", 3);
            
        }
    }
    write(1, "\n", 1);
    return (0);
}