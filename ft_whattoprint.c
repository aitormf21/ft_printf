/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattoprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:48:05 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/30 16:43:04 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_whattoprint(va_list	ap, char const *c, int i)
{
	int	cont;

	cont = 0;
	if (c[i + 1] == 'c')
		ft_putchar_fd((char)va_arg(ap, int), 1);
	else if (c[i + 1] == 's')
		cont = ft_putstrcont_fd(va_arg(ap, char *), 1);
	else if (c[i + 1] == 'd' || c[i + 1] == 'i')
		cont = ft_putnbrcont_fd(va_arg(ap, int), 1, cont);
	else if (c[i + 1] == 'u')
		cont = ft_putunbr_fd(va_arg(ap, unsigned int), 1, cont);
	else if (c[i + 1] == '%')
		ft_putchar_fd('%', 1);
	else if (c[i + 1] == 'x')
		cont = ft_puthex_fd(va_arg(ap, unsigned int), 1, cont, 'x');
	else if (c[i + 1] == 'X')
		cont = ft_puthex_fd(va_arg(ap, unsigned int), 1, cont, 'X');
	else if (c[i + 1] == 'p')
	{

		cont = ft_putptr_fd(va_arg(ap, unsigned long), 1, cont, 'x');
	}
	else
		ft_putchar_fd(c[i], 1);
	return (cont);
}
