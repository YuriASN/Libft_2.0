#include "libft.h"

/** @brief
 * Checks if is a printable character including space.
 * @param c
 * Value to be checked as char. */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 176)
		return (1);
	return (0);
}
