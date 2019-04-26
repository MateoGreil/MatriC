# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgreil <mgreil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 16:56:26 by mgreil            #+#    #+#              #
#    Updated: 2018/04/11 12:09:30 by mgreil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmatric.a

SRC_NAME =	mat4_create.c \
			mat4_identity.c \
			mat4_mult.c \
			mat4_rotate.c \
			mat4_scale.c \
			mat4_translate.c \
			quaternion_create.c \
			quaternion_to_mat4.c \
			vec4_mult_mat4.c \
			vec4_null.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC_PATH = ./srcs/
INC_PATH = ./incs/
OBJ_PATH = ./objs/

SRCS = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJS = $(addprefix $(OBJ_PATH),$(OBJ_NAME))


all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Library created ✓"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@gcc -I $(INC_PATH) -o $@ -c $<

clean:
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Library deleted ✓"

re: fclean all

.PHONY: all objs $(NAME) clean fclean re
