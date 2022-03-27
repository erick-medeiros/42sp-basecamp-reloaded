/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:25:27 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 21:32:59 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_div_mod.c"

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("a %d b %d div %d mod %d", a, b, div, mod);
	return (1);
}
