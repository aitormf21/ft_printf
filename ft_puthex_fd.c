/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:38:55 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/18 14:08:52 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_fd(unsigned long num, int fd, int cont, char m)
{
	char	*basexx;
	char	*basex;

	basexx = "0123456789ABCDEF";
	basex = "0123456789abcdef";
	if (num > 16)
	{
		cont = ft_puthex_fd(num / 16, fd, cont, m);
		cont = ft_puthex_fd(num % 16, fd, cont, m);
	}
	else
	{
		cont++;
		if (m == 'X')
			ft_putchar_fd(basexx[num], fd);
		else
			ft_putchar_fd(basex[num], fd);
	}
	return (cont);
}
