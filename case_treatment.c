/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:54:17 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:40 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	case_treatment(const char *s, va_list args, int *len)
{
//	char *cases = "cspdiuxX%";
//	int case = 0;
//	void (*func[case])(void, int) = {case_c, case_s, case_p, case_i_d, case_u, case_x, case_upperx, case_c};
//	while (cases[case] && cases[case] != *s)
//		case++;
//	fpointers[case](, len);
	if (*s == 'c')
		case_c(va_arg(args, int), len);
	else if (*s == 's')
		case_s(va_arg(args, char *), len);
	else if (*s == 'p')
		case_p(va_arg(args, unsigned long), len);
	else if (*s == 'd' || *s == 'i')
		case_i_d(va_arg(args, int), len);
	else if (*s == 'u')
		case_u(va_arg(args, unsigned int), len);
	else if (*s == 'x')
		case_x(va_arg(args, int), len);
	else if (*s == 'X')
		case_upperx(va_arg(args, int), len);
	else if (*s == '%')
		case_c('%', len);
	return (2);
}
