#include "libft.h"

/** @brief
 * Allocates and returns a string ending with ’\0’,
 * result ofthe concatenation of s1 and s2.
 * If the allocation fails the function returns NULL.
 * @param s1
 * The prefix string.
 * @param s2
 * The suffix string.
 * @return
 * The string result of the concatenation of the 2 strings. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1 && s1[++i])
		str[++j] = s1[i];
	i = -1;
	while (s2 && s2[++i])
		str[++j] = s2[i];
	return (str);
}
