#include "libft.h"

/** @brief Returns the absolute (positive) value of a int.
 * Be aware of int overflow.
 * @param nbr Number to return the absolut from.
 * @return The absolute value of that number. */
int	ft_abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	return (nbr * -1);
}
