/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:27:36 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:51 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	size_t	pos;

	pos = 0;
	len = 0;
	va_start(args, s);
	while (s[pos])
	{
		if (s[pos] == '%' && is_arg((int)s[pos + 1]))
			pos += case_treatment((int)s[pos + 1], args, &len);
		if (s[pos] == '%' && !is_arg((int)s[pos + 1]))
		{
			write(1, "%", 1);
			len++;
			pos++;
		}
		else
			pos = case_text(s, pos, &len);
	}
	va_end(args);
	return (len);
}
