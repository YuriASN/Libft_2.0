#include "libft.h"

/** @brief
 * Returns  an integer less than, equal to, or greater than zero
 * if the first n bytes of s1 is found, respectively,
 * to be less than, to match, or be greater than the first n bytes of s2.
 * @return
 * Difference between s1 to s2, or zero if no difference is found. */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					i;

	if (!n || !s1 || !s2)
		return (0);
	i = -1;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (++i < n && str1[i] == str2[i])
		continue ;
	return (str1[i] - str2[i]);
}
