#include "libft.h"

/** @brief
 * Takes a node as parameter and frees its content using the
 * function ’del’. Free the node itself but does
 * NOT free the next node.
 * @param alst
 * The node to free.
 * @param del
 * Function that will free the content. */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
