/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:54:17 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/01 19:44:21 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	case_treatment(int c, va_list args)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base(va_arg(args, long long), "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		case_u(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		ft_putnbr_base(ft_abs(va_arg(args, int)), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(ft_abs(va_arg(args, int)), "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar_fd('%', 1);
	return (2);
}
