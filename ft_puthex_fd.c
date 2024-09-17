/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:38:55 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/17 15:49:11 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_fd(unsigned long num, int fd, int cont, char m)
{
	char	*baseX;
	char	*basex;

	baseX = "0123456789ABCDEF";
	basex = "0123456789abcdef";
	if (num > 16)
	{
		cont = ft_putunbrbas_fd(num / 16, fd, cont);
		cont = ft_putunbrbas_fd(num % 16, fd, cont);
	}
	else
	{
		cont++;
		if (m == 'X')
			ft_putchar_fd(baseX[num], fd);
		else
			ft_putchar_fd(basex[num], fd);
	}
	return (cont);
}
