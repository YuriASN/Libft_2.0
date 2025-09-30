#include "libft.h"

/** @brief
 * Allocates and returns a copy of the string given as argument
 * without whitespaces at the beginning or at the end of the string.
 * Will be considered as whitespaces the following characters
 * ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning
 * or at the end, the function returns a copy of s.
 * @param s
 * The string to be trimed.
 * @return
 * Trimmed string or a copy of s.
 * If the allocation fails the function returns NULL. */
char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	end = ft_strlen(s);
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		--end;
	return (ft_strsub(s, start, end - start));
}
