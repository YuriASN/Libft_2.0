#include "libft.h"

/** @brief
 * Outputs the integer n to the standard output.
 * @param n
 * The integer to output. */
void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
