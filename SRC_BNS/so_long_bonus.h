/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:26:45 by ael-hadd          #+#    #+#             */
/*   Updated: 2022/01/16 15:07:19 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <mlx.h>
# include "../LIB/libftX/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define KEY_ESC 53
# define KEY_Q 12

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2

# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_DOWN 125
# define KEY_UP 126

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_backg;
	void	*img_wall;
	void	*img_player;
	void	*img_colect;
	void	*img_enemy;
	void	*img_exit;
	int		map_w;
	int		map_h;
	int		img_w;
	int		img_h;
	int		n_colect;
	int		n_player;
	int		n_exit;
	int		x_player;
	int		y_player;
	int		moves;
	int		result;
	int		endgame;
	int		delay;
	int		animate;
}	t_game;

char	**map_reader(char *path);
int		argv_checker(char *argv);
int		map_checker(t_game *game);
char	**map_reader(char *path);
void	img_init(t_game *game);
void	game_init(t_game *game);
int		map_draw(t_game *game);
void	img_draw(t_game *game, void *image, int x, int y);
void	gameplay(t_game *game);
void	player_w(t_game *game);
void	player_s(t_game *game);
void	player_d(t_game *game);
void	player_a(t_game *game);
void	iced_p_draw(t_game *game, char key);
int		exit_game(t_game *game);
int		animation(t_game *game);
void	display_moves(t_game *game);

#endif