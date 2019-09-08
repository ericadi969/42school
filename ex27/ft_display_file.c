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
#define BUF_SIZE 4096

void		ft_disdlay_file(char *filename)
{
	int		fd;
	int		a;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return ;
	while ((a = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, a);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2 || argc == 1)
		return (1);
	ft_file_open(argv[1]);
	return (0);
}
