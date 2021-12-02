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
