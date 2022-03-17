# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 16:20:28 by bguyot            #+#    #+#              #
#    Updated: 2022/03/17 16:24:59 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fdf

INCLUDE			= ./includes/
LIBFT			= ./libft/
SRC_DIR			= ./src/

SRC_FILES		= fdf.c  fdf_utils.c draw_tab.c mult.c tab_vector_size.c hook.c

SRCS			= $(addprefix $(SRC_DIR),$(SRC_FILES))
OBJS			= $(SRCS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) -Llibft -lft $(OBJS) -L /usr/local/lib/ -lmlx -framework OpenGL -framework AppKit

clean:
	$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
