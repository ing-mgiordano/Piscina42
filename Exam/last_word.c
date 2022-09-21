/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:58:18 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/28 20:48:20 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == 32 || str[i] == '\t')
		i--;
	while (!(str[i] == 32 || str[i] == '\t'))
		i--;
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
}