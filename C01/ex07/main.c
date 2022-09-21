/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:32:14 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/12 10:57:35 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int size = 5;
	int tab[5] = {1, 2, 3, 4, 5};
	int *ptr = &tab[0];

	printf("%d, %d, %d, %d, %d, \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(ptr, size);
	printf("%d, %d, %d, %d, %d, \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
