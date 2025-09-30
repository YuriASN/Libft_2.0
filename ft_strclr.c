#include "libft.h"

/** @brief
 * Sets every character of the string to the value ’\0’.
 * @param s
 * The string that needs to be cleared. */
void	ft_strclr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		s[i] = '\0';
}
