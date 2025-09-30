#include "libft.h"

/** @brief
 * Copy source to destination until number of bytes,
 * adding NULL for next bytes if source ends.
 * @param dest
 * String to copy to
 * @param src
 * String to copy from
 * @param n
 * Amount of bytes to copy */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
