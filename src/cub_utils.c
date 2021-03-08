/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwinfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:07:09 by vwinfred          #+#    #+#             */
/*   Updated: 2021/03/05 17:07:10 by vwinfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void					free_array(char **r)
{
	size_t				i;

	i = 0;
	while (r[i])
		free(r[i++]);
	free(r);
}

void					null_all_pointer(t_cub *cub)
{
	int					i;

	i = 0;
	while (i < 5)
	{
		cub->tex[i].image_data = NULL;
		cub->tex[i].image_ptr = NULL;
		cub->tex[i].path = NULL;
		i++;
	}
	cub->sprites = NULL;
	cub->map = NULL;
	cub->sp_dist = NULL;
	cub->perp_for_sprites = NULL;
	cub->sp_order = NULL;
	cub->image_data = NULL;
	cub->mlx = NULL;
	cub->cub_win_ptr = NULL;
	cub->image = NULL;
}
