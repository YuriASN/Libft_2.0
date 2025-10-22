#include "libft.h"
#include <stdio.h>

/** @brief
 * Search for a char inside a string
 * @param c
 * Char to look for.
 * @param find
 * String to be searched on.
 * @return
 * 1 if found, 0 if not. */
static int	is_included(char c, const char *find)
{
	int	i;

	i = -1;
	while (find[++i])
		if (c == find[i])
			return (1);
	return(0);
}

/** @brief
 * Allocates memory and returns a copy of ’s1’
 * with characters from ’set’ removed
 * from the beginning and the end.
 * @param s
 * The string to be trimed.
 * @param set
 * The string containing the set of characters to be removed.
 * @return
 * Trimmed string or a copy of s.
 * If the allocation fails the function returns NULL. */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	start = 0;
	while (is_included(s1[start], set))
		++start;
	end = ft_strlen(s1) - 1;
	while (end > start && is_included(s1[end], set))
		end--;
	str = (char *)ft_calloc((end - start) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (start <= end)
	{
		str[++i] = s1[start];
		start++;
	}
	return (str);
}

/* int main ()
{
	char *s1 = "aoalalaolaola O ola show da xuxa laoaloalao";
	char *set = "ola";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
} */