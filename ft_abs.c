#include "libft.h"

/** @brief Returns the absolute (positive) value of a int.
 * Return as size_t to avoid int overflow.
 * @param nbr Number to return the absolut from.
 * @return The absolute value of that number. */
long	ft_abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	return ((long)nbr * -1);
}
