/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animate_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:12:18 by ael-hadd          #+#    #+#             */
/*   Updated: 2022/01/16 14:35:09 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	animation(t_game *game)
{
	if (game->delay < 1000)
	{
		game->delay++;
		return (0);
	}
	game->delay = 0;
	mlx_destroy_image(game->mlx, game->img_enemy);
	if (game->animate == 1)
		game->img_enemy = mlx_xpm_file_to_image
			(game->mlx, "./IMG/T_0.xpm", &game->img_w, &game->img_h);
	else if (game->animate == 2)
		game->img_enemy = mlx_xpm_file_to_image
			(game->mlx, "./IMG/T_1.xpm", &game->img_w, &game->img_h);
	else if (game->animate == 3)
		game->img_enemy = mlx_xpm_file_to_image
			(game->mlx, "./IMG/T_2.xpm", &game->img_w, &game->img_h);
	else if (game->animate == 4)
	{
		game->img_enemy = mlx_xpm_file_to_image
			(game->mlx, "./IMG/T_3.xpm", &game->img_w, &game->img_h);
		game->animate = 0;
	}
	map_draw(game);
	game->animate++;
	return (0);
}
