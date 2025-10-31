#include "libft.h"

/** @brief
 * Returns a pointer to the first occurrence of
 * the character c in the string s.
 * @param s
 * The string to be searched.
 * @param c
 * Character to search for
 * @return
 * The pointer to the found character, or NULL if none is found. */
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = -1;
	size = ft_strlen(s);
	while (++i <= size)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
