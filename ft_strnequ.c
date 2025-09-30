#include "libft.h"

/** @brief
 * Lexicographical comparison between s1 and s2. If the 2
 * strings are identical the function returns 1, or 0 otherwise.
 * @param s1
 * The first string to be compared.
 * @param s2
 * The second string to be compared.
 * @param n
 * The maximum number of characters to be compared. */
int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	i = -1;
	while ((s1[++i] || s2[i]) && i < n)
		if (s1[i] != s2[i])
			return (0);
	return (1);
}
