#include "libft.h"

/** @brief
 * Allocates and returns a substring from the string given as argument.
 * The substring begins at index start and is of size len.
 * If start and len aren’t refering to a valid substring,
 * the behavior is undefined.
 * If the allocation fails, the function returns NULL.
 * @param s
 * The string from which create the substring.
 * @param start
 * The start index of the substring.
 * @param len
 * The size of the substring.
 * @return
 * The substring. */
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = start - 1;
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	while (++i < len + start)
		str[i - start] = s[i];
	return (str);
}
