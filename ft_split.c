#include "libft.h"

/** @brief
 * Counts how many strings are separated by c.
 * @param str
 * String to be separated.
 * @param c
 * Char to be used as separator.
 * @return
 * The amount of string found. */
static int	get_strings(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			++i;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

/** @brief
 * Get a single string from begging to c or '\0'
 * @param str
 * String to copy.
 * @param c
 * Char to set the end of string.
 * @return
 * Return new allocated string. Or NULL if allocation fails. */
static char	*get_one(char **strs, int j, const char *str, char c)
{
	char	*new;
	int		size;

	size = -1;
	while (str[++size] && str[size] != c)
		continue ;
	new = (char *)ft_calloc(size + 1, sizeof(char));
	if (!new)
	{
		while (j--)
			free(strs[j]);
		free(strs);
		return (NULL);
	}
	while (size--)
		new[size] = str[size];
	strs[j] = new;
	return (new);
}

/** @brief
 * Allocates and returns an array of strings obtained
 * by spliting s using the character c as a delimiter.
 * @param s
 * The string to split.
 * @param c
 * The delimiter character.
 * @return
 * If the allocation fails the function returns NULL. */
char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		size;

	if (!s)
		return (NULL);
	size = get_strings(s, c);
	strs = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < size)
	{
		while (s[i] == c)
			++i;
		if (!s[i])
			break ;
		if (!get_one(strs, j, &s[i], c))
			return (NULL);
		i += ft_strlen(strs[j]);
	}
	return (strs);
}
