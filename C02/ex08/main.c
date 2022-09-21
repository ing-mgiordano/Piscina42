/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:43:57 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/13 14:44:48 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_strlowcase(char *str);

int main(void)
{
    char str[] = "ABCDEFGH/IJHL-MN9OPQ$RSTUVWZYZ3";

    int i;
    i = 0;
    while(str[i] != '\0')
    {
        ft_strlowcase(str);
        write(1, &str[i], 1);
        i++;
    }
    return(0);
}
