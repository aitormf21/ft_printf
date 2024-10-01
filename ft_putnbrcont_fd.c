/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrcont_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:02:53 by aitormar          #+#    #+#             */
/*   Updated: 2024/10/01 12:42:45 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrcont_fd(int long long n, int fd, int cont)
{
	if (n < 0)
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
