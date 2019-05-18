/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 04:02:38 by kzouggar          #+#    #+#             */
/*   Updated: 2019/05/18 18:36:21 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	char *tab;

	fd = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &tab) > 0)
	{
		printf("%s\n", tab);
		ft_strdel(&tab);
	}
}
