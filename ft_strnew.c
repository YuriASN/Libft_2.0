#include "libft.h"

/** @brief
 * Allocates and returns a string ending with ’\0’.
 * Each character of the string is initialized at ’\0’.
 * If the allocation fails the function returns NULL.
 * @param size
 * Size of string to be created including '\0'.
 * @return
 * Pointer to allocation of string */
char	*ft_strnew(size_t size)
{
	char	*str;

	if (size < 1)
		return (NULL);
	str = (char *)ft_memalloc(size);
	return (str);
}
