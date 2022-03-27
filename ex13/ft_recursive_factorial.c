/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:19:35 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/27 22:57:39 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int factorial, int nb)
{
	if (nb > 1)
		factorial = ft_recursive(factorial, nb - 1) * nb;
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = 1;
	return (ft_recursive(factorial, nb));
}
