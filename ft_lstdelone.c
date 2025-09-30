#include "libft.h"

/** @brief
 * Takes as a parameter a link’s pointer address and frees the
 * memory of the link’s content using the function del given as
 * a parameter, then frees the link’s memory and the pointer
 * to the link that was just freed must be set to NULL.
 * @param alst
 * The adress of a pointer to a link that needs to be freed.
 * @param del
 * Function that will free the content. */
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	del(alst[0]->content, alst[0]->content_size);
	free(alst[0]);
	alst = NULL;
}
