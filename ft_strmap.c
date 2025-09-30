#include "libft.h"

/** @brief
 * Applies the function f to each character of the string given
 * as argument to create a “fresh” new string (with malloc(3))
 * resulting from the successive applications of f.
 * @param s
 * The string to map.
 * @param f
 * The function to apply to each character of s.
 * @return
 * The string created from the successive applications of f. */
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = ft_strnew(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(s[i]);
	return (str);
}
