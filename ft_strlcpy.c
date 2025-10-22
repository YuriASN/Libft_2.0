#include "libft.h"

/** @brief
 * Copy string src to dst, taking the full
 * size of the buffer (not just the length)
 * and guarantee to NUL-terminate the result
 * (as long as size is larger than 0).
 * @param dst
 * String to be copied to.
 * @param src
 * String to be copie from.
 * @param size
 * Full size of dst.
 * @return
 * The lenght of the string that was *tried*
 * to be created. */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = -1;
	while (++i < size && src[i])
		dst[i] = src[i];
	if (src[i])
		dst[size - 1] = '\0';
	else
		dst[i] = '\0';
	return (ft_strlen(src));
}
