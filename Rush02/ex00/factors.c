/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:22:12 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 22:15:08 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_find_number(char *str, char *file);
int		ft_strlen(char *str);
int		ft_irregular_numbers(char *n, char *file, int *len);

int	ft_zeros(char *n, int size, char *file, int mode)
{
	char	*nbr;
	int		i;

	if (mode == 1)
	{
		ft_find_number("1", file);
		write(1, " ", 1);
	}
	nbr = (char *) malloc(size + 1);
	nbr[0] = *n;
	i = 1;
	while (i < size)
	{
		nbr[i] = '0';
		i++;
	}
	nbr[i] = '\0';
	return (ft_find_number(nbr, file));
}

void	ft_big_numbers(int len, char *file)
{
	char	aux[2];

	aux[0] = '1';
	aux[1] = '\0';
	if (len % 3 == 0)
	{
		ft_zeros(aux, 3, file, 0);
		write(1, " ", 1);
	}
	if (len % 3 == 1)
	{		
		ft_zeros(aux, len, file, 0);
		write(1, " ", 1);
	}
}

void	ft_tens(int len, char *file, char *aux, char *str)
{
	if ((len - 2) % 3 == 0)
	{	
		if (ft_zeros(aux, 2, file, 0) == 1 && str[1] == '0')
		{
			write(1, " ", 1);
			ft_big_numbers(len - 1, file);
		}
		else
			write(1, " ", 1);
	}
	else
	{
		ft_find_number(aux, file);
		write(1, " ", 1);
	}
}

void	ft_process_number(char *aux, int len, char *file, char *str)
{
	int	mode;

	if (len == 3 && *aux == '1')
		mode = 1;
	else
		mode = 0;
	if (ft_zeros(aux, len, file, mode) != 1)
	{
		ft_tens(len, file, aux, str);
		ft_big_numbers(len, file);
	}
	else
	{
		write(1, " ", 1);
	}
}

void	ft_factor(char *str, char *file)
{
	int		len;
	char	aux[2];

	aux[1] = '\0';
	len = ft_strlen(str);
	while (*str != '\0')
	{
		if (*str != '0')
		{
			aux[0] = *str;
			if (ft_irregular_numbers(str, file, &len) != 1)
			{
				if (len > 1)
					ft_process_number(aux, len, file, str);
				else
					ft_find_number(aux, file);
			}
			else
				str++;
		}
		str++;
		len--;
	}
}
