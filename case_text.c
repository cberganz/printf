/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:40:32 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/01 19:44:19 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	case_text(const char *s, size_t pos)
{
	while (s[pos] && s[pos] != '%')
	{
		ft_putchar_fd(s[pos], 1);
		pos++;
	}
	return (pos);
}
