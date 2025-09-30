#include "libft.h"

/** @brief
 * Set values of content to zero, and free it's memory.
 * @param content
 * Content to clear and free.
 * @param content_size
 * Size of content to work with. */
static void	clear_content(void *content, size_t content_size)
{
	int	i;

	i = -1;
	if (!content)
		return ;
	while (++i < content_size)
		((char *)content)[i] = 0;
	free(content);
}

/** @brief
 * Iterates a list lst and applies the function f to each link to
 * create a new allocated list resulting from the successive
 * applications of f.
 * @param lst
 * A pointer’s to the first link of a list.
 * @param f
 * The address of a function to apply to each link of a list.
 * @return
 * The new list or NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*tmp;
	t_list	*curr;

	if (!lst || !f)
		return (NULL);
	curr = lst;
	head = ft_lstnew(curr->content, curr->content_size);
	if (!head)
		return (NULL);
	f(head);
	tmp = head;
	while (curr->next)
	{
		curr = curr->next;
		tmp->next = ft_lstnew(curr->content, curr->content_size);
		if (!tmp->next)
		{
			ft_lstdel(&head, &clear_content);
			return (NULL);
		}
		tmp = tmp->next;
		f(tmp);
	}
	return (head);
}
