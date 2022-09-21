/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:46:09 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/20 09:52:41 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count_char(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_src;
	unsigned int	size_dest;

	i = 0;
	j = 0;
	size_src = ft_count_char(src);
	size_dest = ft_count_char(dest);
	while (dest[i] > 0 && i < size)
		i++;
	while (i < size - 1 && size != 0 && src[j] > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size <= size_dest)
		return (size_src + size);
	else
	{
		dest[i] = '\0';
		return (size_dest + size_src);
	}
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{   
    char src[] = "123";
    char dest[] = "Holaaaa";

	
   printf( "%d\n", ft_strlcat(dest, src, 2));
   printf( "%s\n", dest);
	return (0);
}
