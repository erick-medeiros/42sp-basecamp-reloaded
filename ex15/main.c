/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:42:33 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 17:05:58 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putstr.c"
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putstr("testando");
	return (1);
}
