/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 23:52:22 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 23:58:09 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include"ft_strlen.c"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Digite alguma coisa\n");
		return (1);
	}
	printf("origin %ld ft %d\n", strlen(&argv[1][0]), ft_strlen(&argv[1][0]));
}
