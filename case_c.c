#include "ft_printf.h"

void	case_c(int c, int fd, int *len)
{
	write(fd, &c, 1);
	*len = *len + 1;
}
