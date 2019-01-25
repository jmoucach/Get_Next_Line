/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:43:27 by jmoucach          #+#    #+#             */
/*   Updated: 2018/12/03 15:50:20 by jmoucach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*str;
	int		fd;
	int		ret;

	(void)ac;
/*	int	fd2;
	char 	*str2;
	fd2 = open(av[2], O_RDONLY);
	get_next_line(fd2, &str2);
	ft_putendl(str2);     // 2
	ft_strdel(&str2);*/
	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &str)))  // 1 till the end
	{
		ft_putendl(str);
		ft_strdel(&str);
	}
/*	int	fd4;
	char 	*str4;
	fd4 = open(av[4], O_RDONLY);
	while ((ret = get_next_line(fd4, &str4)))  // 4 till the end
	{
		ft_putendl(str4);
		ft_strdel(&str4);
	}
	int	fd5;
	char 	*str5;
	fd5 = open(av[5], O_RDONLY);
	get_next_line(fd5, &str5);  	//5
	ft_putendl(str5);
	ft_strdel(&str5);
	get_next_line(fd2, &str2);		//2
	ft_putendl(str2);
	ft_strdel(&str2);
	int	fd3;
	char 	*str3;
	fd3 = open(av[3], O_RDONLY);
	get_next_line(fd3, &str3);		//3
	ft_putendl(str3);
	ft_strdel(&str3);
	get_next_line(fd5, &str5);  	//5
	ft_putendl(str5);
	ft_strdel(&str5);*/
	return (0);
}
