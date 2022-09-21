/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:19:50 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 23:03:04 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_is_numeric(char *c);
char	*ft_copy_file(char *file_name);
int		ft_find_number(char *str, char *file);
int		ft_factor(char *str, char *file);
int		ft_strncmp(char *str1, char *str2, int n);
int		ft_strlen(char *str);

void	skip_zero(char	*to_translate)
{
	while (*to_translate != '\0')
	{
		if (*to_translate == '0')
			to_translate++;
		else
			break ;
	}
}

int	ft_start_translation(char *to_translate, char *filename)
{
	char	*file;

	file = ft_copy_file(filename);
	if (ft_strncmp(to_translate, "0", 1) == 0 && ft_strlen(to_translate) == 1)
	{
		ft_find_number(to_translate, file);
		free(file);
	}
	else
	{
		skip_zero(to_translate);
		if (ft_is_numeric(to_translate))
		{
			if (file == NULL)
				return (-1);
			ft_factor(to_translate, file);
			free(file);
		}
		else
		{
			free(file);
			return (-1);
		}
	}
	return (0);
}
