/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:38:55 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/30 16:41:29 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr_fd(unsigned long num, int fd, int cont, char m)
{
	if (!num)
	{
		cont = 5;
		ft_putstr_fd("(nil)", 1);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		cont = 2 + ft_puthex_fd(num, fd, cont, m);
	}
	return (cont);
}
