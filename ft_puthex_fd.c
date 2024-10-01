/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:09:36 by aitormar          #+#    #+#             */
/*   Updated: 2024/10/01 12:27:53 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long num, int fd, int cont, char m)
{
	char	*basexx;
	char	*basex;

	basexx = "0123456789ABCDEF";
	basex = "0123456789abcdef";
	if (num >= 16)
		cont = ft_puthex_fd(num / 16, fd, cont, m);
	cont++;
	if (m == 'X')
		ft_putchar_fd(basexx[num % 16], fd);
	else
		ft_putchar_fd(basex[num % 16], fd);
	return (cont);
}
