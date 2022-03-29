/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:33:51 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/29 18:20:41 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_strdup.c"
#include<stdio.h>

int	main(void)
{
	char	*str;
	char	*newstr;

	str = "string";
	newstr = ft_strdup(str);
	printf("%s", newstr);
	return (1);
}
