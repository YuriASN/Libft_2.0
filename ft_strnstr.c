#include "libft.h"

/** @brief
 * Find and return the first occurrence of to_find in str.
 * @param str
 * String that will be searched.
 * @param to_find
 * String to find on the other */
char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (i < n && str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j] && i + j < n)
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
