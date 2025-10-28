#include "libft.h"

/** @brief
 * Applies the function f to each character of the string passed
 * as argument, and passing its index as first argument.
 * Each character is passed by address to f to be modified if necessary.
 * @param s
 * The string to iterate. 
 * @param f
 * The function to apply to each character of s and its index. */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
