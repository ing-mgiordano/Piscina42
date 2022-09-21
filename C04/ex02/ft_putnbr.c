/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:08:39 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/18 13:08:42 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * -1;
	}
	else
	{
		num = nb;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + 48);
}
