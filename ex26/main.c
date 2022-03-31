/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:29:39 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 04:52:03 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_count_if.c"
#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s2[n] && (s1[n] == s2[n]))
		n++;
	return (s1[n] - s2[n]);
}

int	ft_f(char *p)
{
	if (ft_strcmp(p, "erick") == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	**tab;

	tab = malloc(sizeof(char) * 100);
	tab[0] = "erick";
	tab[1] = "medeiros";
	tab[2] = "erick";
	tab[3] = "erick";
	tab[4] = 0;
	printf("%d", ft_count_if(tab, &ft_f));
	free(tab);
	return (1);
}
