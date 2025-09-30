#include "libft.h"

/**	@brief
 * Concatenates source on destination.
 * @param dest
 * String to be added to
 * @param src
 * String to add from */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		continue ;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = src[j];
	return (dest);
}
