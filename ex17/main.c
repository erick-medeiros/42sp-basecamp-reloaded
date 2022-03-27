/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:00:30 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:44 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include"ft_strcmp.c"

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	if (argc < 3)
	{
		printf("Digite duas palavras para sem comparadas\n");
		return (1);
	}
	str1 = &argv[1][0];
	str2 = &argv[2][0];
	printf("origin %d ft %d\n", strcmp(str1, str2), ft_strcmp(str1, str2));
}
