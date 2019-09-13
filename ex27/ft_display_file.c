/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:31:00 by btennie           #+#    #+#             */
/*   Updated: 2019/09/08 13:15:52 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void		disdlay_file(char *filename)
{
	int		fd;
	int		a;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &a, 1))
		write(1, &a, 1);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else
		disdlay_file(argv[1]);
	return (0);
}
