#include "libft.h"

/** @brief
 * Allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * @param num
 * Amount of elements in the array.
 * @param size
 * Size of each element.
 * @return
 * A pointer to the allocated memory, which is suitably aligned for
 * any built-in type. On error functions return NULL. */
void	*ft_calloc(size_t num, size_t size)
{
	char	*str;
	size_t	i;

	if (!num || !size)
		return (malloc(1));
	if (num >= __SIZE_MAX__ || size >= __SIZE_MAX__
		|| (ssize_t)size < 0 || (ssize_t)num < 0)
		return (NULL);
	str = (char *)malloc(num * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < num * size && i < sizeof(str))
		str[i++] = '\0';
	return ((void *)str);
}
