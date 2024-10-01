/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:59:43 by aitormar          #+#    #+#             */
/*   Updated: 2024/10/01 11:47:34 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *c, ...)
{
	va_list	ap;
	int		i;
	int		cont;

	cont = 0;
	i = 0;
	va_start(ap, c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			cont += ft_whattoprint(ap, c, i);
			i++;
		}
		else
		{
			cont++;
			ft_putchar_fd(c[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (cont);
}
