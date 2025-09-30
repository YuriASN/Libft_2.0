#include "libft.h"

/** @brief
 * Takes as a parameter the address of a string that need to be
 * freed with free(3), then sets its pointer to NULL.
 * @param as
 * The string’s address that needs to be freed and its pointer 
 * set to NULL.
 */
void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
