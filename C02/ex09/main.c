/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:03:32 by migiorda          #+#    #+#             */
/*   Updated: 2022/07/14 13:14:35 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "holAAa juAncarLO, como estas? hdfj-rtr+ew!vvf";

    int i;
    i = 0;
    while(str[i] != '\0')
    {
        ft_strcapitalize(str);
        write(1, &str[i], 1);
        i++;
    }
    return(0);
}
