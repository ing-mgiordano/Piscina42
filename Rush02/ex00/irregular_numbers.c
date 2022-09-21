/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irregular_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:55:46 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 21:53:45 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_big_numbers(int len, char *file);
int		ft_find_number(char *str, char *file);

int	ft_irregular_numbers(char *n, char *file, int *len)
{
	char	*str;

	str = (char *) malloc(3);
	if (*n == '1' && n[1] != '\0' && *len % 3 != 0)
	{
		str[0] = '1';
		str[1] = n[1];
		str[2] = '\0';
		ft_find_number(str, file);
		write(1, " ", 1);
		if (*len > 2)
			ft_big_numbers(*len - 1, file);
		n++;
		*len = *len - 1;
		return (1);
	}
	return (0);
}
