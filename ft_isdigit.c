#include "libft.h"

/** @brief
 * Checks for a digit (0 through 9).
 * @param c
 * Value to check as char. */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
