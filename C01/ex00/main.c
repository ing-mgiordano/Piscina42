/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:21:01 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/11 10:35:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int main(void)	
{
	int a;
	int *ptr;

	ptr = &a;

	ft_ft(ptr);
	printf("el valor es %d", a);
}
