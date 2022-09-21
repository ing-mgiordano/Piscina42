/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:22:22 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/10 13:31:29 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_imprimirmatriz(int c, int f, int x, int y)
{
	if ((f == 1) && (c == 1 || c == x))
	{
		ft_putchar('A');
	}
	else if ((f == y) && (c == 1 || c == x))
	{
		ft_putchar('C');
	}
	else if ((f > 1 && f < y) && (c > 1 && c < x))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
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
