/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:45:48 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/11 21:52:31 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
	printf("%lu\n", strlen("hola"));
	printf("%d\n", ft_strlen("hola"));
}
