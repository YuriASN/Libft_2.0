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
	t_list	*tmp;
	t_list	*to_free;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		to_free = tmp;
		tmp = tmp->next;
		free(to_free);
	}
	lst[0] = NULL;
}
