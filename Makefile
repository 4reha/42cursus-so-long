# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 14:01:14 by ael-hadd          #+#    #+#              #
#    Updated: 2022/01/16 16:39:18 by ael-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long

FILES		=	SRC/so_long.c SRC/map_checker.c SRC/map_reader.c SRC/game_start.c \
				SRC/drawer.c SRC/game_play.c SRC/player_update.c SRC/exit.c \


FILES_BNS	=	SRC_BNS/so_long_bonus.c SRC_BNS/map_checker_bonus.c SRC_BNS/map_reader_bonus.c \
				SRC_BNS/game_start_bonus.c SRC_BNS/drawer_bonus.c SRC_BNS/game_play_bonus.c \
				SRC_BNS/player_update_bonus.c SRC_BNS/exit_bonus.c SRC_BNS/animate_bonus.c \

LIB			=	LIB/libftX/libftX.a


$(NAME)		:	$(LIB) $(FILES)
			@cc -Wall -Werror -Wextra $(FILES) $(LIB) -lmlx -framework OpenGL -framework AppKit -o so_long
			@echo "\033[0;32mReady to Play ;)\033[0;32m"

$(LIB)		:	LIB/libftX
			@$(MAKE) -C LIB/libftX/

all			:	$(NAME)


bonus		:	$(LIB) $(FILES_BNS)	
			@cc -Wall -Werror -Wextra $(FILES_BNS) $(LIB) -lmlx -framework OpenGL -framework AppKit -o so_long_bonus
			@echo "\033[0;32mReady to Play ;)\033[0;32m"

clean		:
			@rm -f so_long so_long_bonus
			@$(MAKE) clean -C LIB/libftX/

fclean		:	clean
			@$(MAKE) fclean -C LIB/libftX/

re			:	fclean all
			@$(MAKE) re -C LIB/libftX/


.PHONY		:	all clean fclean re bonus