/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_destroy_display.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 18:56:35 by mg                #+#    #+#             */
/*   Updated: 2020/11/22 18:34:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_int.h"

int	mlx_destroy_display(t_xvar *xvar)
{
	XCloseDisplay(xvar->display);
}
