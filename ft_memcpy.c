#include "libft.h"

/** @brief
 * Copies n bytes from memory area src to memory area dest.
 * @param dest
 * Memory area to copy to.
 * @brief src
 * Memory area to copy from
 * @brief n
 * Amount of bytes to be copied.
 * @return
 * The copy or NULL if error happens. */
void	*memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*from;
	char		*to;

	if (!src || !dest)
		return (NULL);
	from = (const char *)src;
	to = (char *)dest;
	i = -1;
	while (++i < n)
		to[i] = from[i];
	return (dest);
}
