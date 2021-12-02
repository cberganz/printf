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

void	case_s(char *s, int fd, int *len)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			case_c(s[i], fd, len);
			i++;
		}
	}
	else
		case_s("(null)", fd, len);
}
