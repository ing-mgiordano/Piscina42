/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:24:38 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/11 15:39:00 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 5;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}
