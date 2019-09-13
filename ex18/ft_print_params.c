/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:58:31 by btennie           #+#    #+#             */
/*   Updated: 2019/09/08 12:49:44 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstring(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstring(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
