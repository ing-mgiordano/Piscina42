/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:13:22 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/27 16:53:22 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	aux;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		aux = str[i];
		str[i] = str[len];
		str[len] = aux;
		i++;
		len--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_strrev(argv[i]);
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
