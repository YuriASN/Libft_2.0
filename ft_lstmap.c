#include "libft.h"

/** @brief
 * Iterates through the list ’lst’, applies the function
 * ’f’ to each node’s content, and creates a new list
 * resulting of the successive applications of the function ’f’.
 * The ’del’ function is used to delete the content of a node if needed.
 * @param lst
 * The address of a pointer to a node.
 * @param f
 * The address of the function applied to each node’s content.
 * @param del
 * The address of the function used to delete a node’s content if needed.
 * @return
 *  The new list. NULL if the allocation fails. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	while (tmp)
	{
		new = ft_lstnew(tmp->content);
		if (!new)
			
	}
}
