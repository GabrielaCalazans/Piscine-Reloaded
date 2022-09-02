# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 00:49:34 by coder             #+#    #+#              #
#    Updated: 2022/09/01 20:04:11 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_INCLUDE = -I "./includes/"

SRCS = $(addprefix ./srcs/, \
	ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_strcmp.c \
	ft_swap.c)

FLAGS = -Wall \
		-Wextra \
		-Werror

OBJS = ft_putchar.o ft_putstr.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
$(OBJS): $(SRCS)
	gcc $(FLAGS) -c $(SRCS) $(PATH_INCLUDE)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all