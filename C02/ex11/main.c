/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:15:50 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/14 16:19:51 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void    ft_putstr_non_printable(char *str);

 int main(void)
{
	char print[] = "Hola, como\nestas";
	ft_putstr_non_printable(print);

	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");

	return(0);
}
