/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:39:00 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/25 17:04:30 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "Hola Mundo";
	char dest[2];	

	//printf("%s\n", strncpy(dest, src, 15));

	printf("%s\n", ft_strncpy(dest, src, 15));

	return(0);	
}
