#include "libft.h"
/** @brief
 * Counts how many digits the number passed as a
 * argument. Includes a digit for a sign if needed.
 * @param n
 * Number to count digits from
 * @return
 * How many digits the number has
*/
static int	get_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n / 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/** @brief
 * Allocate (with malloc(3)) and returns a string ending
 * with ’\0’ representing the integer n given as argument.
 * Negative numbers must be supported.
 * If the allocation fails, the function returns NULL.
 * @param n
 * The integer to be transformed into a string.
 * @return
 * The string representing the integer passed as argument.
*/
char	*ft_itoa(int n)
{
	char	*str;
}
