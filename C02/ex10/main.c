/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:47:08 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/26 17:37:10 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	unsigned int i;
	i = 0;

	char src[] = "World!";
	char dest[] = "Hello ";
	ft_strlcpy(dest, src, 3);

	while(dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
