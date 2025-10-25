#include "libft.h"

/** @brief
 * Outputs the integer n to the file descriptor fd.
 * @param n
 * The integer to print.
 * @param fd
 * The file descriptor. */
void	ft_putnbr_fd(int n, int fd)
{
	ssize_t	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	c = nbr % 10 + '0';
	write(fd, &c, 1);
}
