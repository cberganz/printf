/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:42:27 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/01 19:19:01 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "./libft/include/libft.h"
#include <stdarg.h>

int	ft_printf(const char *s, ...);
int	is_arg(int c);
size_t	case_treatment(int c, va_list args);
size_t	case_text(const char *s, size_t pos);
void	case_u(unsigned int n, int fd);

#endif
