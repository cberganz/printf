/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:54:43 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/01 18:39:54 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_u(unsigned int n, int fd)
{
	if (n >= 10)
	{
		case_u(n / 10, fd);
		ft_putchar_fd((int)(n % 10) + '0', fd);
	}
	else
		ft_putchar_fd((int)n + '0', fd);
}
