/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:55:38 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/26 20:49:47 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;

	arr = (char *)malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			arr[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

int	main(void)
{
	char	*tab[4];
	tab[0] = "Hello";
	tab[1] = "World";
	tab[2] = "!";
	tab[3] = "!";
	printf("%s", ft_strjoin(4, tab, "--"));
	return (0);
}