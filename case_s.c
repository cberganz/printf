/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:21 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:23 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_s(char *s, int *len)
{
	if (s)
	{
		while (*s)
		{
			case_c(*s, len);
			s++;
		}
	}
	else
		case_s("(null)", len);
}
