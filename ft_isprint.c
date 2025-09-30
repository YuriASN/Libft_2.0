#include "libft.h"

/** @brief
 * Checks if is a printable character including space.
 * @param c
 * Value to be checked as char. */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
