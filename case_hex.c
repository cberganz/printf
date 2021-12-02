/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:35:45 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:35:47 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_hex(unsigned int nbr, char *base, int *len)
{
	if (nbr >= 16)
	{
		case_hex(nbr / 16, base, len);
		case_c(base[nbr % 16], 1, len);
	}
	else
		case_c(base[nbr], 1, len);
}
