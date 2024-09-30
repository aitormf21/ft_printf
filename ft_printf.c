/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:59:43 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/30 16:36:07 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


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

int main(void)
{
	char *str = "Hola";
	char *str2 = NULL;

	int i = ft_printf("Hola %c %s %p %p %d %i %u %x %X %%\n", 'a', "Adios", str, str2, -89, 42, -42, 42, 42);
	int j = printf("Hola %c %s %p %p %d %i %u %x %X %%\n", 'a', "Adios", str, str2, -89, 42, -42, 42, 42);

	ft_printf("ft_printf --> %i\nprintf --> %i\n", i, j);
}
