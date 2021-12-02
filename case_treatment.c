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

size_t	case_treatment(int c, va_list args, int *len)
{
	if (c == 'c')
		case_c(va_arg(args, int), 1, len);
	else if (c == 's')
		case_s(va_arg(args, char *), 1, len);
	else if (c == 'p')
		case_p(va_arg(args, unsigned long), len, 0);
	else if (c == 'd' || c == 'i')
		case_i_d(va_arg(args, int), 1, len);
	else if (c == 'u')
		case_u(va_arg(args, unsigned int), 1, len);
	else if (c == 'x')
		case_hex(va_arg(args, int), "0123456789abcdef", len);
	else if (c == 'X')
		case_hex(va_arg(args, int), "0123456789ABCDEF", len);
	else if (c == '%')
		case_c('%', 1, len);
	return (2);
}
