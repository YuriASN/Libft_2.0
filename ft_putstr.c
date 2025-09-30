#include "libft.h"

/** @brief
 * Outputs the string s to the standard output.
 * @param s
 * The string to output. */
void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
