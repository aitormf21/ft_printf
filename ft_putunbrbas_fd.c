/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrbas_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:17:43 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/10 16:29:13 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbrbas_fd(unsigned int num, char *base, int fd)
{
	int	len;

	len = ft_strlen(base);
	if (num > (len - 1))
	{
		ft_putunbrbas_fd(num / len, base, fd);
		ft_putunbrbas_fd(num % len, base, fd);
	}
	else
		ft_putchar_fd(base[num], fd);
}
