#include "libft.h"

/** @brief 
 * Allocates memory and returns a substring from the string ’s’.
 * The substring starts at index ’start’ and has a maximum length of ’len’.
 * @param s
 * The original string from which to create the substring.
 * @param start
 *  The starting index of the substring within ’s’.
 * @param len
 * The maximum length of the substring.
 * @return
 * The substring or NULL if the allocation fails. */
char 	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		s_len;
	int		i;

	if (!s || start > ft_strlen(s))
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		new = ft_calloc(s_len - start + 1, sizeof(char));
	else
		new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
	{
		new[i] = s[start + i];
	}
	new[i] = '\0';
	return (new);
}
