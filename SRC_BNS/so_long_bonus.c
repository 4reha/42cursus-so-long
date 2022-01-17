/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:16:31 by ael-hadd          #+#    #+#             */
/*   Updated: 2022/01/16 15:42:11 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static int	ber_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i - 1] == 'r' && str[i - 2] == 'e' && str[i - 3] == 'b'
		&& str[i - 4] == '.')
	{
		return (1);
	}
	printf("Error: Your map file must has '.ber' extention\n");
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.map = map_reader(argv[1]);
		if (!game.map)
		{
			printf("Error: Your Map not found!");
			return (0);
		}
		if (ber_checker(argv[1]) && map_checker(&game))
		{
			game_init(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
		}
	}
	else if (argc > 2)
		printf("Error: You must have only one argument!\n");
	else if (argc < 2)
		printf("Error: You must have at least one argument!\n");
	return (0);
}
