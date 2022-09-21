/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:57 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/25 19:48:09 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *str)
{
	int		i;
	char	*dest;
	int		len;

	i = 0;
	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char str[] = "hola";
	char dest[] = "";
	printf("%s\n",  dest);
	printf("%s\n",  str);
	printf("%p\n",  str);
	printf("%s\n",  ft_strdup(str));
	printf("%p\n",  ft_strdup(str));
}