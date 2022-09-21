/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:02:32 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/20 10:07:31 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_delete_signe(char *str)
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
		return (contsign);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	str;
	char	result;
	char	sign;

	result = 0;
	sign = ft_delete_signe(str);
	while (str >= '0' && str <= '9')
	{
		result = (result * 10) + (str - '0');
	}
	result = result * sign;
	return (result);
}
