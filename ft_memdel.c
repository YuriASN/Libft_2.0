#include "libft.h"

/** @brief
 * Takes as a parameter the address of a memory area that needs
 * to be freed with free(3), then puts the pointer to NULL.
 * @param ap
 * A pointer’s address to free it's memory and set to NULL. */
void	ft_memdel(void **ap)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = NULL;
}
