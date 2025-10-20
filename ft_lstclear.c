#include "libft.h"

/** @brief
 * Deletes and frees the given node and all its successors,
 * using the function ’del’ and free(3).
 * Finally, set the pointer to the list to NULL.
 * @param lst
 * The address of a pointer to a node.
 * @param del
 * The address of the function used to delete
 * the content of the node. */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst)
		return ;
	while (lst[0])
	{
		del(lst[0]);
		free(lst[0]);
		lst[0] = lst[0]->next;
	}
	lst[0] = NULL;
}
