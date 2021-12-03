/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:01 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:02 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_p(unsigned long nbr, int *len)
{
	char	*base;
	static int	first_use;

	base = "0123456789abcdef";
	if (nbr == 0)
		case_s("(nil)", len);
	else
	{
		if (first_use == 0)
		{
			case_s("0x", len);
			first_use = 1;
		}
		if (nbr >= 16)
		{
			case_p(nbr / 16, len);
			case_c(base[nbr % 16], len);
		}
		else
			case_c(base[nbr], len);
	}
	first_use = 0;
}
