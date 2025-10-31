#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

/** @brief
 * Converts the initial portion of the string pointed to by str to int.
 * @param str
 * String to be converted.
 * @return
 * Int of the number read in str.
 */
int	ft_atoi(const char *str)
{
	int	nbr;
	int	sig;
	int	i;

	i = 0;
	sig = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	nbr = 0;
	while (ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sig);
}
