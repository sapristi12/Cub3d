/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 10:57:15 by erlajoua          #+#    #+#             */
/*   Updated: 2021/01/11 10:57:18 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub.h"

void	want_save(t_cub *cub, int ac, char **av)
{
	if (ac >= 3)
	{
		if (ft_strcmp(av[2], "--save") == 0)
			cub->parse.save = 1;
		else
			cub->parse.save = 0;
	}
	else
	{
		cub->parse.save = 0;
	}
}

void	init_window(t_cub *cub, t_mlx *mlx, t_info *infos)
{
	int x;
	int y;

	x = 0;
	y = 0;
	mlx->mlx_ptr = mlx_init();
	mlx_get_screen_size(mlx->mlx_ptr, &x, &y);
	if (infos->resx < 0)
		infos->resx = 0;
	if (infos->resy < 0)
		infos->resy = 0;
	if (infos->resx > x || infos->resx <= 0)
		infos->resx = x;
	if (infos->resy > y || infos->resy <= 0)
		infos->resy = y;
	mlx->img.width = infos->resx;
	mlx->img.height = infos->resy;
	if (cub->parse.save == 0)
		mlx->win = mlx_new_window(mlx->mlx_ptr, infos->resx,
						infos->resy, "Cub3d");
}

void	ft_start(t_cub *cub)
{
	cub->parse.i = 0;
	cub->parse.strlen = 0;
	cub->parse.nbline = 0;
	cub->parse.side = '0';
	cub->parse.pos[0] = 0;
	cub->parse.pos[1] = 0;
	cub->parse.flag = 0;
	cub->res = 0;
	cub->no = 0;
	cub->so = 0;
	cub->ea = 0;
	cub->we = 0;
	cub->spr = 0;
	cub->floor = 0;
	cub->ceil = 0;
	cub->parse.north = NULL;
	cub->parse.south = NULL;
	cub->parse.west = NULL;
	cub->parse.east = NULL;
	cub->parse.is_bitmap = 0;
}
