/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitormar <aitormar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:11:14 by aitormar          #+#    #+#             */
/*   Updated: 2024/09/10 16:25:21 by aitormar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *c, ...);

void	ft_putunbr_fd(unsigned int num, int fd);
void	ft_putunbrbas_fd(unsigned int num, char *base, int fd);



#endif
