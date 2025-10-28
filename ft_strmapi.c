#include "libft.h"

/** @brief
 * Applies the function f to each character of the string passed 
 * as argument by giving its index as first argument to create a
 * new allocated string resulting from the successive applications of f.
 * @param s
 * The string to map.
 * @param f
 * The function to apply to each character of s and its index.
 * @return
 * The string created from the successive applications of f. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
