/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:02:54 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/26 16:22:18 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char *hexa;
	unsigned char str_value;

	hexa = "0123456789abcdef";
	while (*str != '\0')
	{
		str_value = (unsigned char)*str;
		if (str_value < 32 || str_value > 126)
		{
			ft_putchar('\\');
			ft_putchar(hexa[str_value / 16]);
			ft_putchar(hexa[str_value % 16]);
		}		
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

int main(void)
{
	char *a;

	a = "";
	ft_putstr_non_printable(a);
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return(0);
}