/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:37:06 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 22:18:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"ft_iterative_factorial.c" 

int	main(int argc, char *argv[])
{
	int	factorial;

	if (argc == 1)
	{
		printf("Passe o valor a ser calculado como parametro\n");
		return (1);
	}
	factorial = ft_iterative_factorial(atoi(argv[1]));
	printf("factorial %d\n", factorial);
	return (1);
}
