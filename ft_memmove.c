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
	char		tmp[1024];
	char		*to;
	const char	*from;
	size_t		i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	from = (const char *)src;
	to = (char *)dest;
	while (i < n)
	{
		tmp[i] = from[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		to[i] = tmp[i];
		i++;
	}
	return ((void *)to);
}
