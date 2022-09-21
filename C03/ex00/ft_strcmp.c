/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:37:04 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/17 10:36:09 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] < str2[i])
			return (-1);
		if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_strcmp("hola", "holas")); //+
	printf("\n%d", ft_strcmp("Hello", "He")); // +
	printf("\n%d", ft_strcmp("He", "Hello")); // -
	printf("\n%d", ft_strcmp("Hello", "Hello")); // 0
	return(0);
}
