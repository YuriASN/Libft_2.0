#include "libft.h"

/** @brief
 * Erases the data in the n bytes of the memory
 * starting at the location pointed to by s,
 * by writing zeros to that area.
 * @param pt
 * Pointer of memory to be set to 0.
 * @param n
 * Number of bytes to erase the value. */
void	ft_bzero(void *pt, size_t n)
{
	size_t	i;
	char	*s;

	s = (char *)pt;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}
