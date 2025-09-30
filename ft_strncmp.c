#include "libft.h"

/** @brief
 * Compare 2 strings up to n bytes.
 * Returning 0 if they match or the difference
 * from char on s1 to char on s2 */
int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n && str2[i])
	{
		/* if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		if (!s1[i] && !s2[i])
			break ; */
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
