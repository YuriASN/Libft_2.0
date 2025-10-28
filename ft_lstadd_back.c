#include "libft.h"

/** @brief
 * Adds the node ’new’ at the end of the list.
 * @param lst
 * The address of a pointer to the first node of a list.
 * @param new
 * The address of a pointer to the node to be added. */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
