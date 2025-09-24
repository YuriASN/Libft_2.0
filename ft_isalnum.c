#include "libft.h"

/** @brief
 * Checks if is an alphanumeric character.
 * @param c
 * Value to be checked as char. */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
