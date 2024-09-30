# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 13:24:18 by aitormar          #+#    #+#              #
#    Updated: 2024/09/30 16:30:54 by aitormar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MY_SOURCES = ft_printf.c\
						ft_puthex_fd.c\
						ft_putptr_fd.c\
						ft_putnbrcont_fd.c\
						ft_putstrcont_fd.c\
						ft_putunbr_fd.c\
						ft_whattoprint.c\

OBJS = $(MY_SOURCES:.c=.o)

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
