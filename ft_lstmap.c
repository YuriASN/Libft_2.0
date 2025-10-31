#include "libft.h"

/** @brief
 * Clean the content and free the whole list
 * @param list
 * List of nodes to clean and free.
 * @param del
 * Function to clear the content.
 * @return
 * NULL */
static t_list	*clear_all(t_list *list, void (*del)(void *))
{
	while (list)
	{
		ft_lstdelone(list, del);
		list = list->next;
	}
	return (NULL);
}

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
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (clear_all(new, del));
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			return (clear_all(new, del));
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
