/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_texture.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <thomassarafian@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 01:20:05 by tsarafia          #+#    #+#             */
/*   Updated: 2020/05/22 11:02:02 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub.h"

int		parsing_north(t_cub *cub, char *line)
{
	int fd;
	printf("line debut : %s\n", line);
	while (*line != '.')
		line++;
	if (!(cub->parse.north = ft_strdup(line)))
		ft_error("parsing fail");
	printf("voila : |%s|\n", cub->parse.north);
	if (cub->parse.north[0] == '\0')
		ft_error("No north texture");	
	fd = open(line, O_RDONLY);
	printf("fd : %d\n", fd);
	if (fd < 0)
	{
		ft_error("No north texture");
	}

	return (1);
}

int		parsing_west(t_cub *cub, char *line)
{
	while (*line != '.')
		line++;
	if (!(cub->parse.west = ft_strdup(line)))
		ft_error("parsing fail");
	return (1);
}

int		parsing_east(t_cub *cub, char *line)
{
	while (*line != '.')
		line++;
	if (!(cub->parse.east = ft_strdup(line)))
		ft_error("parsing fail");
	return (1);
}

int		parsing_south(t_cub *cub, char *line)
{
	while (*line != '.')
		line++;
	if (!(cub->parse.south = ft_strdup(line)))
		ft_error("parsing fail");
	return (1);
}

int		parsing_sprite(t_cub *cub, char *line)
{
	while (*line != '.')
		line++;
	if (!(cub->parse.sprite = ft_strdup(line)))
		ft_error("parsing fail");
	return (1);
}
