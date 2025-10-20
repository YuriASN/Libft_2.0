#include "libft.h"

/** @brief
 * Allocates memory and returns new node.
 * The ’content’ member variable is initialized
 * with the given parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 * @param content
 * The content to put in the new node.
 * @return
 * The new link or NULL if allocation fails. */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_link;

	new_link = (t_list *)malloc(sizeof(t_list));
	if (!new_link)
		return (NULL);
	new_link->content = malloc(sizeof(content));
	if (!new_link->content)
	{
		free(new_link);
		return (NULL);
	}
	ft_memcpy(new_link->content, content, sizeof(content));
	new_link->next = NULL;
	return (new_link);
}
