/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:23:40 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/29 18:56:22 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_range.c"
#include<stdio.h>

int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	i;

	min = 2;
	max = 5;
	array = ft_range(min, max);
	i = 0;
	while ((min + i) < max)
	{
		printf("%d", array[i]);
		i++;
	}	
	return (1);
}
