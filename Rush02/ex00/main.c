/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeltran <abeltran@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:08:12 by abeltran          #+#    #+#             */
/*   Updated: 2022/07/24 21:53:46 by abeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_start_translation(char *to_translate, char *filename);

int	main(int argc, char **argv)
{
	char	*filename;
	int		error;

	filename = "numbers.dict";
	if (argc == 2)
		error = ft_start_translation(argv[1], filename);
	else if (argc == 3)
	{
		filename = argv[1];
		error = ft_start_translation(argv[2], filename);
	}
	else
		error = 1;
	if (error == 1)
		write(1, "Error\n", 6);
	else if (error == -1)
		write(1, "Dict error\n", 11);
	else
		write(1, "\n", 1);
	return (error);
}
