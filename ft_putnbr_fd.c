#include "libft.h"

/** @brief
 * Outputs the integer n to the file descriptor fd.
 * @param n
 * The integer to print.
 * @param fd
 * The file descriptor. */
int	ft_putnbr_fd(int n, int fd)
{
	ssize_t	nbr;
	int		check;
	int		total;
	char	c;

	nbr = n;
	total = 0;
	if (nbr < 0)
	{
		if (write(fd, "-", 1) == -1)
			return (-1);
		total++;
		nbr *= -1;
	}
	if (nbr > 9)
		check = ft_putnbr_fd(nbr / 10, fd);
	if (check == -1)
		return (-1);
	total += check;
	c = nbr % 10 + '0';
	if (write(fd, &c, 1) == -1)
		return (-1);
	total++;
	return (total);
}
