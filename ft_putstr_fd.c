#include "libft.h"

/** @brief
 * Outputs the string s to the file descriptor fd.
 * @param s
 * The string to output.
 * @param fd
 * The file descriptor. */
int	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return (write(fd, "(null)", 6));
	return (write(fd, s, ft_strlen(s)));
}
