#include "libft.h"

/** @brief
 * Outputs the char c to the file descriptor fd.
 * @param c
 * The character to output.
 * @param fd
 * The file descriptor. */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
