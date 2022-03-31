/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 05:41:28 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 17:03:45 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_print_numbers.c"
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_numbers();
	return (1);
}
