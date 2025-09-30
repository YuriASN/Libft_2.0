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
static char	*get_one(const char *str, char c)
{
	char	*new;
	int		size;

	size = -1;
	while (str[++size] && str[size] != c)
		continue ;
	new = ft_strnew(size + 1);
	if (!new)
		return (NULL);
	while (size--)
		new[size] = str[size];
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
char	**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		size;

	size = get_strings(s, c);
	strs = (char **)malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < size)
	{
		while (s[i] == c)
			++i;
		if (s[i])
			strs[j] = get_one(&s[i], c);
		if (!strs[j])
		{
			while (j--)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		i += ft_strlen(strs[j]);
	}
	strs[j] = NULL;
	return (strs);
}
