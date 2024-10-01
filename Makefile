# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitor <aitor@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 13:24:18 by aitormar          #+#    #+#              #
#    Updated: 2024/10/01 11:58:23 by aitor            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf
ARFLAGS = -rcs
AR = ar

MY_SOURCES = ft_printf.c\
						ft_putcharcont_fd.c\
						ft_puthex_fd.c\
						ft_putptr_fd.c\
						ft_putnbrcont_fd.c\
						ft_putstrcont_fd.c\
						ft_putunbr_fd.c\
						ft_whattoprint.c\

OBJS = $(MY_SOURCES:.c=.o)

all: libft $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C libft

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJS)
	$(MAKE)  clean -C libft
fclean: clean
	$(RM) $(NAME)
	$(MAKE)  fclean -C libft
re: fclean all

.PHONY: all clean fclean re
