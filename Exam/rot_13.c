/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:47:14 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/21 23:31:38 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm')
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
			{
					argv[1][i] += 13;
			}
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z')
				|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
			{
				argv[1][i] -= 13;
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
