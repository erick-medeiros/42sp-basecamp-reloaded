/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:59:10 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 23:37:17 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"ft_sqrt.c"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Passe o valor a ser calculado como parametro\n");
		return (1);
	}
	printf("sqrt %d\n", ft_sqrt(atoi(argv[1])));
	return (1);
}
