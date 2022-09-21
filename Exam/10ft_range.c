/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10ft_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:52:41 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/28 16:54:08 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{   
	int i;
	int *array;

	i = 0;
	if (start > end)
	{
		array = (int *)malloc(sizeof(int) * (start - end + 1));
		if (!array)
			return (0);
		while (start >= end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		array = (int *)malloc(sizeof(int) * (end - start + 1));
		if (!array)
			return (0);
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	return (array);
}

int main(void)
{
  ft_range(10, -10);
  return (0);
}