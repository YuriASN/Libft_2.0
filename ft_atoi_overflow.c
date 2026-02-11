#include "libft.h"

/** @brief Checks if number on the string will result on a
 * int overflow if ft_atoi is called.
 * @param str String to check the number.
 * @return True if overflow happens, Flase if not. */
int	ft_atoi_overflow(char *str)
{
	int		sign;
	long	nbr;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr = 0;
	while (ft_isdigit(*str))
	{
		if (sign < 0 && nbr > ((long)INT_MAX + 1 - (*str - '0')) / 10)
			return (1);
		if (sign > 0 && nbr > (INT_MAX - (*str - '0')) / 10)
			return (1);
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (0);
}
