/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:09:49 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 04:14:42 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_foreach.c"

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[3];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_foreach(tab, 3, &ft_putchar);
	return (1);
}
