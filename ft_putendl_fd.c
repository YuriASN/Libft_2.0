#include "libft.h"

/** @brief
 * Outputs the string s to the file
 * descriptor fd followed by a ’\n’.
 * @param s
 * The string to output.
 * @param fd
 * The file descriptor. */
int	ft_putendl_fd(char const *s, int fd)
{
	int	amount;

	amount = ft_putstr_fd(s, fd);
	if (amount == -1)
		return (-1);
	if (write(fd, "\n", 1) == -1)
		return (-1);
	return (amount + 1);
}
