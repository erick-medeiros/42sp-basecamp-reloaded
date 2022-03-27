/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:10:39 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 17:35:33 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ex06(void)
{
	#include "ex06/ft_print_alphabet.c"
	ft_print_alphabet();
}

void	ex07(void)
{
	#include "ex07/ft_print_numbers.c"
	ft_print_numbers();
}

int	main(int argc, char *argv[])
{
	char *test_ex;

	if (argc == 1)
		return (1);
	test_ex = argv[1];
	if (strcpy(test_ex, "6"))
		ex06();
	if (strcpy(test_ex, "7"))
		ex07();
	return (1);
}
