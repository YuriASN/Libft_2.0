#include "libft.h"

/** @brief
 * Allocates (with malloc(3)) and returns a memory area.
 * The memory allocated is initialized to 0.
 * If the allocation fails, the function returns NULL.
 * @param size
 * The size of the allocation.
 * @return
 * Pointer to the allocation on the memory. */
void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size < 1)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	return (ptr);
}
