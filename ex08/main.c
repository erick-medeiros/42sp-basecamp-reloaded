/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:32:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 17:04:58 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_is_negative.c"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2);
	return (1);
}
