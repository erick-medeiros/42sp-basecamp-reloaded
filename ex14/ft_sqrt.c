/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:59:14 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 23:33:28 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;
	int	mult;

	root = 1;
	while (nb)
	{
		mult = root * root;
		if (mult == nb)
			return (root);
		if (mult > nb)
			break ;
		root++;
	}
	return (0);
}
