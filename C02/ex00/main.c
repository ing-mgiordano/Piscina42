/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:39:00 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/19 13:28:30 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[] = "h";
	char src[] = "test !";
	ft_strcpy(dest, src);
	printf("%s", dest);

	return(0);	
}
