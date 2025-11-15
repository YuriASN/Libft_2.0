#include "libft.h"

/** @brief
 * Scans  the  initial n bytes of the memory area
 * pointed to by s for the first instance of c.
 * @param s
 * Memory to be scanned.
 * @param c
 * Char you're looking for.
 * @param n
 * Maximum amount of bytes it'll be scanned.
 * @return
 * Byte found or NULL if not found. */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	if (!s || !n)
		return (NULL);
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		++i;
	}
	return (NULL);
}
