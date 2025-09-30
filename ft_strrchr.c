#include "libft.h"

/** @brief
 * Returns a pointer to the last occurrence of
 * the character c in the string s.
 * @param s
 * String to search on
 * @param c
 * Character to search for
 * @return
 * Pointer to the char found, or NULL if not found. */
char	*strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
