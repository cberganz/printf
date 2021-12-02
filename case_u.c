/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:54:43 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:46 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_u(unsigned int n, int fd, int *len)
{
	if (n >= 10)
	{
		case_u(n / 10, fd, len);
		case_c(n % 10 + '0', fd, len);
	}
	else
		case_c(n + '0', fd, len);
}
