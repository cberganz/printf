#include "ft_printf.h"

void	case_p(unsigned long nbr, int *len, int check)
{
	char *base;
	
	base = "0123456789abcdef";
	if (nbr == 0)
		case_s("(nil)", 1, len);
	else
	{
		if (check == 0)
		{
			case_s("0x", 1, len);
			check = 1;
		}
		if (nbr >= 16)
		{
			case_p(nbr / 16, len, check);
			case_c(base[nbr % 16], 1, len);
		}
		else
		case_c(base[nbr], 1, len);
	}
}