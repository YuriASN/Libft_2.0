#include "libft.h"

/**	@brief
 * Concatenates source on destination up to n bytes.
 * @param dest
 * String to be added to
 * @param src
 * String to add from 
 * @param nb
 * Number of bytes to copy*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(dest);
	i = -1;
	while (++i < nb && src[i])
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
