#include "libft.h"

/** @brief
 * Copies n bytes from memory area src to memory area dest.
 * he bytes in src are first copied into a temporary array
 * that does not overlap src or dest, and the bytes are
 * then copied from the temporary array to dest.
 * @param dest
 * Memory area to copy to.
 * @param src
 * Memory area to copy from.
 * @return
 * The pointer to dest, or NULL if error happens. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*to;
	const char	*from;
	size_t		i;

	if (dest == src || !n)
		return (dest);
	to = (char *)dest;
	from = (char *)src;
	i = 0;
	if (dest > src)
	{
		while (--n)
			to[n] = from[n];
		to[n] = from[n];
	}
	else
	{
		while (i < n)
		{
			to[i] = from[i];
			++i;
		}
	}
	return (dest);
}
