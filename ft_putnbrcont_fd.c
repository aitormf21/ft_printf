/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrcont_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:02:53 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/17 15:12:01 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrcont_fd(int n, int fd, int cont)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		cont = ft_putnbrcont_fd(147483648, fd, cont);
	}
	else if (n < 0)
	{
		cont++;
		ft_putchar_fd('-', fd);
		cont = ft_putnbrcont_fd(-n, fd, cont);
	}
	else if (n > 9)
	{
		cont = ft_putnbrcont_fd(n / 10, fd, cont);
		cont = ft_putnbrcont_fd(n % 10, fd, cont);
	}
	else
	{
		cont++;
		ft_putchar_fd(n + '0', fd);
	}
	return (cont);
}
