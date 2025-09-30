#include "libft.h"

/** @brief
 * If c is an uppercase letter, tolower() returns its lowercase
 * equivalent. Otherwise, it returns c. */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
