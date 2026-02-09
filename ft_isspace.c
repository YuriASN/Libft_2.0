#include "libft.h"

/** @brief Checks if the char received as an
 * argument is a space on the ASCII table.
 * @return 1 if it is, 0 if not. */
int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
