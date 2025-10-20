#include "libft.h"

/** @brief
 * Adds the node ’new’ at the end of the list.
 * @param lst
 * The address of a pointer to the first node of a list.
 * @param new
 * The address of a pointer to the node to be added. */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*tmp;

	if (!lst || !lst[0])
		return ;
	i = -1;
	tmp = lst[0];
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
