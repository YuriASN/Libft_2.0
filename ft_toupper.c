#include "libft.h"

/** @brief
 * If c is an lowercase letter, toupper() returns its uppercase
 * equivalent. Otherwise, it returns c. */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
