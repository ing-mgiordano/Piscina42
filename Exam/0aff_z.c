/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:45:43 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/27 14:45:37 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	verifz;

	verifz = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
				verifz += 1;
			i++;
		}
		if (verifz >= 1)
			ft_putchar('z');
		else
			ft_putchar('z');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	return (0);
} */

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	write(1, "z\n", 2);
	return (0);
}
