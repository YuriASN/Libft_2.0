#include "libft.h"

/** @brief Power calculator. Base times base, power times.
 * @param base Base number.
 * @param power Power number.
 * @return Result of equation. */
size_t	ft_pow(int base, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power--)
		result *= base;
	return (result);
}
