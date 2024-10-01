/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:27:39 by aitormar          #+#    #+#             */
/*   Updated: 2024/10/01 12:25:13 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned long long num, int fd, int cont)
{
	if (num >= 10)
		cont = ft_putunbr_fd(num / 10, fd, cont);
	cont++;
	ft_putchar_fd((num % 10)+ '0', fd);
	return (cont);
}
