#include "libft.h"

/** @brief
 * Applies the function f to each character of the string 
 * passed as argument. Each character is passed by 
 * address to f to be modified if necessary.
 * @param s
 * The string to iterate.
 * @param f
 * The function to apply to each character of s. */
void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = -1;
	while (s[++i])
		f(&s[i]);
}
