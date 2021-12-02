# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 14:38:12 by cberganz          #+#    #+#              #
#    Updated: 2021/12/02 15:37:14 by cberganz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  ft_printf.c			\
		is_arg.c		\
		case_treatment.c	\
		case_text.c		\
		case_c.c		\
		case_s.c		\
		case_i_d.c		\
		case_p.c		\
		case_hex.c		\
		case_u.c
		
			
CC = gcc

FLAGS = -Wall -Wextra -Werror -c

INCLUDES = -I.

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
