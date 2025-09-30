#include "libft.h"

/** @brief
 * Outputs the char c to the file descriptor fd.
 * @param c
 * The character to output.
 * @param fd
 * The file descriptor. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
