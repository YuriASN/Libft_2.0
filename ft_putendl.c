#include "libft.h"

/** @brief
 * Outputs the string s to the standard output
 * followed by a ’\n’.
 * @param s
 * The string to output. */
void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}
