/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:30:32 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/22 14:23:35 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
				i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return 0;
}
