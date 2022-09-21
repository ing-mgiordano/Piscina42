/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9union.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:19:16 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/28 14:37:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_repeat(char *str, int pos, char c)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{	
		if (ft_check_repeat(str1, i, str1[i]))
			ft_putchar(str1[i]);
		i++;
	}
	while (str2[j] != '\0')
	{
		if (ft_check_repeat(str1, i, str2[j]) 
			&& ft_check_repeat(str2, j, str2[j]))
		{
			ft_putchar(str2[j]);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}