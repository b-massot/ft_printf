# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmassot <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 10:04:22 by bmassot           #+#    #+#              #
#    Updated: 2025/10/22 10:04:30 by bmassot          ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_print_utils.c \
       ft_print_hex.c \
       ft_print_ptr.c \
       ft_print_unsigned.c \

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra 

AR = ar rcs

RM = rm -f

# ----------------------------
# -C = Change directory
# cp = copie le fichier libft.a dans libftprintf.a
all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	${AR} $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	${RM} $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	${RM} $(NAME)

re: fclean all
