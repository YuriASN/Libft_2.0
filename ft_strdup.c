#include "libft.h"

/** @brief
 * Returns a copy of the string with memory allocation.
 * @param src
 * String to be copied from */
char	*ft_strdup(char *src)
{
	char	*str;

	if (!src)
		return (NULL);
	str = (char *)ft_calloc((ft_strlen(src) + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, ft_strlen(src) + 1);
	return (str);
}
