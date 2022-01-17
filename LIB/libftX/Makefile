# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 14:58:30 by ael-hadd          #+#    #+#              #
#    Updated: 2022/01/15 15:19:47 by ael-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE	=	ft_strlen.c ft_strdup.c ft_substr.c ft_split.c ft_itoa.c ft_strchr.c ft_strjoin.c get_next_line.c

NAME = libftX.a

OBJ_FILE	=	ft_strlen.o ft_strdup.o ft_substr.o ft_split.o ft_itoa.o ft_strchr.o ft_strjoin.o get_next_line.o


all: $(NAME)

$(NAME):	$(OBJ_FILE)
		@ar rc $(NAME) $(OBJ_FILE)

$(OBJ_FILE):	$(SRC_FILE)
		@cc -Wall -Werror -Wextra -c  $(SRC_FILE)
		

clean:
	@rm -f $(OBJ_FILE) $(BONUS_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
