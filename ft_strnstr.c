#include "libft.h"

/** @brief
 * Find and return the first occurrence of to_find in str.
 * @param str
 * String that will be searched.
 * @param to_find
 * String to find on the other */
char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int	i;
	int	j;

	i = -1;
	if (!to_find || !to_find[0])
		return (str);
	while (++i < n && str[i])
	{
		j = -1;
		while (to_find[++j] && to_find[j] == str[i + j])
			continue ;
		if (!to_find[j])
			return (&str[i]);
	}
	return (NULL);
}
