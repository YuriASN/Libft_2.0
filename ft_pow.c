#include "libft.h"

/** @brief Power calculator. Base times base, power times.
 * @param base Base number.
 * @param power Power number.
 * @return Result of equation. */
int	ft_pow(int base, int power)
{
	int	result;

	if (!power || base == 1)
		return (1);
	result = base;
	if (power > 0)
		while (power--)
			result *= base;
	if (power < 0)
		while (power++ < 1)
			result /= base;
	return (result);
}