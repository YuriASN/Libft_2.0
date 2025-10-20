#include "libft.h"

/** @brief
 * Returns the last node of the list.
 * @param lst
 * The beginning of the list.
 * @return
 * Last node of the list. */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
