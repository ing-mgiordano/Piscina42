/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:12:34 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 21:51:48 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_move_pointer(char *file);
int		ft_strlen(char *str);
int		ft_strncmp(char *str1, char *str2, int n);

void	ft_print_after(char *str)
{
	while (*str != '\0' && *str != '\n' && *str != ' ')
	{
		write(1, str, 1);
		str++;
	}
	if (*str == ' ')
	{
		write(1, " ", 1);
		ft_move_pointer(str);
	}
}

void	ft_move_pointer(char *file)
{
	while (*file != '\0' && (*file == ' ' || *file == ':'))
		file++;
	if (*file != '\n')
		ft_print_after(file);
}

int	ft_find_number(char *str, char *file)
{
	int	found;
	int	i;
	int	size;

	found = 0;
	i = 0;
	size = ft_strlen(str);
	while (file[i] != '\0' && found == 0)
	{
		if (ft_strncmp(str, &file[i], size) == 0)
			found = 1;
		if (found == 1 && (file[i + size] != ' ' && file[i + size] != ':'))
			found = 0;
		i++;
	}
	if (found)
	{
		ft_move_pointer(&file[i + size]);
	}
	return (found);
}
