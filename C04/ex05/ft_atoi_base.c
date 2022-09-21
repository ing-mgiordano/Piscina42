/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:08:03 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/20 10:11:54 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_delete_signe(char *str, int *j)
{	
	int	i;
	int	contsign;

	i = 0;
	contsign = 1;
	if (str[i] != '\0')
	{
		while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r' || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				contsign = contsign * -1;
			i++;
		}
		*j = i;
		return (contsign);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	j;
	int	sign;

	result = 0;
	sign = ft_delete_signe(str, &j);
	while (str[j] >= '0' && str[j] <= '9')
	{
		result = (result * 10) + (str[j] - '0');
		j++;
	}
	result = result * sign;
	return (result);
}
