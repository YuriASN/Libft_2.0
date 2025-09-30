#include "libft.h"

/** @brief
 * Fills the first n bytes of the memory area with the byte c.
 * @param s
 * Area to be filled.
 * @param c
 * Value to fill.
 * @param n
 * Amount of memory to be filled.
 * @return
 * Pointer of s. */
void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = -1;
	str = s;
	while (++i < n)
		str[i] = c;
	return (s);
}
