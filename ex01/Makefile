# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/24 11:51:23 by huidris           #+#    #+#              #
#    Updated: 2025/05/24 11:51:25 by huidris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

SRC		= $(wildcard ./*.cpp)

OBJS	= $(patsubst ./%.c, ./%.o, $(SRC))

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)
	clear

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
