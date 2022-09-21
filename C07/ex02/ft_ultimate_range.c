/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:01:01 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/27 12:48:11 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(4 * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
	}
	*range = array;
	return (i);
}


int main(void)
{
	int i;
	int *range;
	int min;
	int max;
	
	min = 3;
	max = 18;
	i = 0;
	ft_ultimate_range(&range, min, max);
	while (min < max)
	{
		printf("%d - ", range[i]);
		i++;
		min++;
	}
	printf("%d ", ft_ultimate_range(&range, min, max));
  	return (0);
}