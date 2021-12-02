/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:46:31 by cberganz          #+#    #+#             */
/*   Updated: 2021/12/01 19:44:22 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char 	c = 't';
	char 	*s = "TEST";
	int	i = 12;
	unsigned int	u = 4123123123;
	ft_printf("\n#\n# My printf tester\n#\n\nCharacter :%c#\nString :%s#\nPointer :%p#\nint :%d#\nuint :%u#\nx :%x\n%%a%%d\n", c, s, s, i, u, i);
	printf("\n#\n# True printf tester\n#\n\nCharacter :%c#\nString :%s#\nPointer :%p#\nint :%d#\nuint :%u#\nx : %x\n%%a%%d\n\n", c, s, s, i, u, i);
	
	printf("\n\n");
	ft_printf("%s", NULL);
	printf("%s", NULL);
	return (0);
}
