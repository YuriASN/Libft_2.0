#include "libft.h"

/** @brief
 * Returns the lenght of the string passed as argument.
 * If no argument is received, return 0.
 * @param str
 * String to find it's lenght.
 * @return
 * Lenght of the string. */
int	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
