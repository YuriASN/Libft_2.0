#include "libft.h"

/** @brief
 * Checks  for  an  alphabetic  character.
 * @param c
 * The value to be checked as char. */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
