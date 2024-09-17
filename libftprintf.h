/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:11:14 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/17 15:47:38 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *c, ...);

int		ft_whattoprint(va_list	ap, char const *c, int i);
int	ft_puthex_fd(unsigned long num, int fd, int cont, char m);
int		ft_putunbr_fd(unsigned long num, int fd, int cont);
int		ft_putstrcont_fd(char *s, int fd);
int		ft_putnbrcont_fd(int n, int fd, int cont);

#endif
