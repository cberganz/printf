/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:35:37 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/02 15:35:38 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_c(int c, int *len)
{
	write(1, &c, 1);
	*len += 1;
	return (1);
}
