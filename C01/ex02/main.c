/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:35:43 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/20 19:03:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;
	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	//ft_swap(&a, &b); escribir esto y no definir los ptros es lo mismo
	printf("a : %d, b : %d\n", a, b);
}
