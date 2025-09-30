#include "libft.h"

/** @brief
 * Compare 2 strings up to n bytes.
 * Returning 0 if they match or the difference
 * from char on s1 to char on s2 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		if (!s1[i] && !s2[i])
			break ;
		i++;
	}
	return (0);
}
