#include "libft.h"

/** @brief
 * Outputs the string s to the file
 * descriptor fd followed by a ’\n’.
 * @param s
 * The string to output.
 * @param fd
 * The file descriptor. */
void	ft_putendl_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
