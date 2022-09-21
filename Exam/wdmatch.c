/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:09:55 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/28 18:49:19 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	aux = 0;
	while (str1[i] != '\0')
	{
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				aux++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (aux == ft_strlen(str1))
	{
		ft_putstr(str1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
