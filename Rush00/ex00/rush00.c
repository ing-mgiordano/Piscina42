/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:17:21 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/10 13:55:10 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_imprimirmatriz(int c, int f, int x, int y)
{
	if (((f == 1 || f == y) && (c == 1)) || ((f == 1 || f == y) && (c == x)))
		ft_putchar('o');
	else if ((f == 1 || f == y) && (c > 1 && c < x))
		ft_putchar('-');
	else if ((f > 1 && f < y) && (c > 1 && c < x))
		ft_putchar(' ');
	else
		ft_putchar('|');
}

void	rush(int x, int y)
{
	int	c;
	int	f;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			ft_imprimirmatriz(c, f, x, y);
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
