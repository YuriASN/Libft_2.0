#include "libft.h"

/** @brief
 * Iterates the list lst and applies the function f to each link.
 * @param lst
 * A pointer to the first link of a list.
 * @param f
 * The address of a function to apply to each link of a list. */
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*linked;

	if (!lst || !f)
		return ;
	linked = lst;
	while (linked)
	{
		f(linked);
		linked = linked->next;
	}
}
