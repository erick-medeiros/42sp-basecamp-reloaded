/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 05:29:41 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 17:02:12 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_print_alphabet.c"
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (1);
}
