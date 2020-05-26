NAME = Cub3D

SRCS =	srcs/bitmap.c 			\
		srcs/keypress.c 		\
		srcs/parse_info.c 		\
		srcs/parse.c 			\
		srcs/parse2.c			\
		srcs/parsing_map1.c 	\
		srcs/parsing_map2.c 	\
		srcs/parsing_res.c 		\
		srcs/parsing_rgb.c 		\
		srcs/parsing_texture.c 	\
		srcs/raycasting.c 		\
		srcs/raycasting2.c 		\
		srcs/raycasting3.c 		\
		srcs/sprite.c			\
		srcs/sprite2.c			\
		srcs/utils.c 			\
		libft/ft_atoi.c			\
		libft/ft_bzero.c		\
		libft/ft_isalnum.c		\
		libft/ft_isalpha.c		\
		libft/ft_isascii.c		\
		libft/ft_isdigit.c		\
		libft/ft_strdup.c		\
		libft/ft_strlen.c		\
		gnl/get_next_line.c		\
		gnl/get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

HEAD = headers/cub.h

AR = ar rc

LIB = ranlib

FLAGS = -Wall -Wextra -Werror
LIBX = -L ./minilibx-linux/ -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd 

all		: $(NAME)

$(NAME)	:	$(OBJS)
			gcc $(FLAGS) -o $(NAME) $(OBJS) $(LIBX)

clean	:
			rm -rf $(OBJS)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
