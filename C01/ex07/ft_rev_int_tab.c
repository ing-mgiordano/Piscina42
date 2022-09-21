/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:32:52 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/12 10:59:30 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	num;

	aux = 0;
	while (aux < size / 2)
	{
		num = tab[aux];
		tab[aux] = tab[size - 1 - aux];
		tab[size - 1 - aux] = num;
		aux++;
	}
}
