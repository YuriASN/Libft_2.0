#include "libft.h"

/** @brief
 * Copy source to destination until end of source
 * @param dest
 * String to copy to
 * @param src
 * String to copy from */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
