/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondary_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:20:47 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 21:53:44 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	ft_is_numeric(char *c)
{
	while (*c != 0)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}

int	ft_file_size(char *file_name)
{
	int		i;
	int		file;
	char	*buf;

	i = 0;
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (-1);
	buf = (char *) malloc(1);
	if (buf == NULL)
		return (-1);
	while (read(file, buf, 1) != 0)
		i++;
	close(file);
	free(buf);
	return (i);
}

char	*ft_copy_file(char *file_name)
{
	int		file;
	int		size;
	char	*buf;

	size = ft_file_size(file_name);
	if (size == -1)
		return (NULL);
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	buf = (char *) malloc(size + 1);
	if (buf == NULL)
		return (NULL);
	read(file, buf, size);
	buf[size] = '\0';
	close(file);
	return (buf);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] < str2[i])
			return (-1);
		if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}
