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
