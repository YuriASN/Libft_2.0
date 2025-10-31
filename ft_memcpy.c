#include "libft.h"

/** @brief
 * Copies n bytes from memory area src to memory area dest.
 * @param dest
 * Memory area to copy to.
 * @param src
 * Memory area to copy from
 * @param n
 * Amount of bytes to be copied.
 * @return
 * The copy or NULL if error happens. */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*from;
	char		*to;

	if (!dest && !src)
		return (dest);
	from = (const char *)src;
	to = (char *)dest;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dest);
}
