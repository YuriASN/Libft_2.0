#include "libft.h"

/** @brief
 * Allocates and returns a link. The variables content and
 * content_size of the new link are initialized by copy of
 * the parameters of the function. If the parameter content
 * is nul, the variable content is initialized to NULL and
 * the variable content_size is initialized to 0 even
 * if the parameter content_size isn’t.
 * The variable next is initialized to NULL.
 * @param content
 * The content to put in the new link.
 * @param content_size
 * The size of the content of the new link.
 * @return
 * The new link or NULL if allocation fails. */
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_link;

	new_link = (t_list *)malloc(sizeof(t_list));
	if (!new_link)
		return (NULL);
	new_link->content = malloc(content_size);
	if (!new_link->content)
	{
		free(new_link);
		return (NULL);
	}
	ft_memcpy(new_link->content, content, content_size);
	new_link->content_size = content_size;
	new_link->next = NULL;
	return (new_link);
}
