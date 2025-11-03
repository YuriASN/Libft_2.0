#include "libft.h"

/** @brief
 * Counts the number of nodes in the list.
 * @param
 * The beginning of the list.
 * @return
 * The length of the list. */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	if (!lst)
		return (count);
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
