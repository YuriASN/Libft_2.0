#include "libft.h"

/** @brief
 * Copies no more than n bytes from memory area src to memory area dest,
 * stopping when the character c is found.
 * If the memory areas overlap, the results are undefined.
 * @param dest
 * Destination of the copy.
 * @param src
 * Source for the destination.
 * @param c
 * Last character to be copied if found.
 * @param n
 * Maximum amount of bytes to be copied.
 * @return
 * Next character after c in dest, or NULL if c wasn't found. */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	const char	*nsrc;
	char		*ndest;

	if (!src || !dest || !n)
		return (NULL);
	nsrc = (const char *)src;
	ndest = (char *)dest;
	i = -1;
	while (++ i < n)
	{
		ndest[i] = nsrc[i];
		if (ndest[i] == c)
			return (&dest[i + 1]);
	}
	return (NULL);
}
