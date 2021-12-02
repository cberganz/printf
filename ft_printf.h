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

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int	ft_printf(const char *s, ...);
int	is_arg(int c);
size_t	case_treatment(int c, va_list args, int *len);
size_t	case_text(const char *s, size_t pos, int *len);
void	case_c(int c, int fd, int *len);
void	case_i_d(int n, int fd, int *len);
void	case_s(char *s, int fd, int *len);
void	case_u(unsigned int n, int fd, int *len);
void	case_p(unsigned long nbr, char *base, int *len, int check);
void	case_hex(unsigned int nbr, char *base, int *len);

#endif
