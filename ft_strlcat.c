#include "libft.h"

/**	@brief
 * Concatenates source on destination up to size -1
 * saving 1 for the NULL character.
 * @param dest
 * String to be added to
 * @param src
 * String to add from
 * @param size
 * Full size of dest */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;

	i = 0;
	if (!dest || !src)
		return (0);
	d_len = ft_strlen(dest);
	while (src[i] && i + d_len < size - 1)
	{
		dest[d_len + i] = src[i];
		++i;
	}
	dest[d_len + i] = '\0';
	return (size);
}
