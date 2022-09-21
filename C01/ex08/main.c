/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:35:20 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/12 10:16:10 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int size = 8;
	
	int tab[8] = {6, 26, 99, 33, 15, 71, 1, 44};
	int *ptr = &tab[0];
	printf("%d, %d, %d, %d, %d, %d, %d, %d, \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7]);
	ft_sort_int_tab(ptr, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7]);
	return (0);
}

