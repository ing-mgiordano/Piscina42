/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:16:04 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/13 14:32:56 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_strupcase(char *str);

int main(void)
{	
	char str[] = "abcdefgh/ijkl-mn5opq$rstuvwxyz";

	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_strupcase(str);
		write(1, &str[i], 1);
		i++;
	}
    return(0);
}
