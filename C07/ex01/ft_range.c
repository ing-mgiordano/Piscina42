/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:54:17 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/25 20:12:28 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

#include <stdio.h>

int main(void)
{
    int min;
    int max;
    int i;

    min = 10;
    max = 55;
    i = 0;

    while(min < max)
    {
        printf("%d - ", ft_range(min, max)[i]);
        i++;
		min++;
    }
    return (0);
}