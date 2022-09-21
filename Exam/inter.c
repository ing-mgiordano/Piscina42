/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:58:45 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/28 17:56:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_double(char *str, char c, int pos)
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

void	ft_inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (ft_check_double(str1 ,str1[i], i))
				{
					ft_putchar(str1[i]);
					break ;
				}	
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}