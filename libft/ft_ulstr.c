/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 23:22:10 by olboothe          #+#    #+#             */
/*   Updated: 2019/03/20 21:19:14 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1] += 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] >= 'a' && *arv[1] <= 'z')
			{
				*argv[1] -= 32;
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (1);
}
