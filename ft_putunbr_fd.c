/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:27:39 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/17 15:30:26 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr_fd(unsigned long num, int fd, int cont)
{
	if (num > 10)
	{
		cont = ft_putunbr_fd(num / 10, 1, fd);
		cont = ft_putunbr_fd(num % 10, 1, fd);
	}
	else
	{
		cont++;
		ft_putchar_fd(num + '0', fd);
	}
	return (cont);
}
