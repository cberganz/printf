/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:40:32 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:33 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	case_text(const char *s, size_t pos, int *len)
{
	while (s[pos] && s[pos] != '%')
	{
		case_c(s[pos], 1, len);
		pos++;
	}
	return (pos);
}
