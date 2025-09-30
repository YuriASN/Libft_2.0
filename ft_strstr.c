#include "libft.h"

/** @brief
 * Find and return the first occurrence of to_find in str.
 * @param str
 * String that will be searched.
 * @param to_find
 * String to find on the other */
char	*ft_strstr(char *str, char *to_find)
{
	return (ft_strnstr(str, to_find, ft_strlen(str)));
}
