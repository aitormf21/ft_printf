/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:11:14 by aitormar          #+#    #+#             */
/*   Updated: 2024/10/01 12:16:42 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(char const *c, ...);

int		ft_whattoprint(va_list	ap, char const *c, int i);
int		ft_putcharcont_fd(char c, int fd, int cont);
int		ft_puthex_fd(unsigned long num, int fd, int cont, char m);
int		ft_putptr_fd(unsigned long num, int fd, int cont, char m);
int		ft_putunbr_fd(unsigned long long num, int fd, int cont);
int		ft_putstrcont_fd(char *s, int fd);
int		ft_putnbrcont_fd(int long long n, int fd, int cont);

#endif
