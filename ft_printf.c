/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:56:18 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/10 16:32:14 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *c, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap,c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			if (c[i+1] == 'c')
				ft_putchar_fd((char)va_arg(ap, int), 1);
			else if (c[i+1] == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			else if (c[i+1] == 'd')
				ft_putnbr_fd(va_arg(ap, int), 1);
			else if (c[i+1] == 'i')
				ft_putnbr_fd(va_arg(ap, int), 1);
			else if (c[i+1] == 'u')
				ft_putunbr_fd(va_arg(ap,unsigned int), 1);
			else if (c[i+1] == '%')
				ft_putchar_fd('%', 1);
			else if (c[i+1] == 'x')
				ft_putunbrbas_fd(va_arg(ap, unsigned int), "0123456789abcdef", 1);
			else if (c[i+1] == 'X')
				ft_putunbrbas_fd(va_arg(ap, unsigned int), "0123456789ABCDEF", 1);
			else if (c[i+1] == 'X')
			else
				ft_putchar_fd(c[i], 1);
			i++;
		}
		else
		{
			ft_putchar_fd(c[i], 1);
		}
		i++;
	}
	va_end(ap);
}
