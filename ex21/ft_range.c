/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:23:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/29 18:56:12 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min == max)
	{
		array = 0;
		return (array);
	}
	array = malloc(sizeof(int) * (max - min));
	i = 0;
	while ((min + i) < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
