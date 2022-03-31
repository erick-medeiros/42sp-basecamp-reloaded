/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 05:13:14 by eandre-f          #+#    #+#             */
/*   Updated: 2022/03/31 16:54:42 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFSIZE 100

void	ft_putstr_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_display_file(char *file_path)
{
	int		fd;
	char	buffer[BUFFSIZE];
	int		read_bytes;
	int		r_close;

	fd = open(file_path, O_RDONLY);
	if (fd < 0)
		return (1);
	read_bytes = read(fd, buffer, BUFFSIZE);
	if (read_bytes < 0)
		return (1);
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, BUFFSIZE);
	}
	write(1, "\n", 1);
	r_close = close(fd);
	if (r_close < 0)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		ft_putstr_nl("File name missing.");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr_nl("Too many arguments.");
		return (1);
	}
	return (ft_display_file(argv[1]));
}
