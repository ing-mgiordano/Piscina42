/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:52:03 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/21 17:27:11 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	ft_swap(&a, &b);
	/* ft_putchar('a');
	if (a > 10)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
	}
	else
		ft_putchar(a + 48);
	ft_putchar('b');
	if (b >= 10)
	{	
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
	}
	else
		ft_putchar(b + 48); */
}