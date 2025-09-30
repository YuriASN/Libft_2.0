#include "libft.h"

/** @brief
 * Outputs the character c to the standard output.
 * @param c
 * The character to output. */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
