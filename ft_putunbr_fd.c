/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:33:10 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/10 12:41:20 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putunbr_fd(unsigned int num, int fd)
{
	if (num > 9)
	{
		ft_putunbr_fd(num / 10, fd);
		ft_putunbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}
