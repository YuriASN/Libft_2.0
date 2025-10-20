#include "libft.h"

/** @brief
 * Adds the node ’new’ at the beginning of the list.
 * @param lst
 * The address of a pointer to the first node of a list.
 * @param new
 * The address of a pointer to the node to be added. */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}
