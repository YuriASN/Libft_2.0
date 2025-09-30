#include "libft.h"

/** @brief
 * Takes the adress of a pointer to a link and frees the memory
 * of this link and every successors of that link using the functions
 * del and free. Finally the pointer to the link that
 * was just freed must be set to NULL.
 * @param alst
 * The address of a pointer to the first link of a list
 * that needs to be freed.
 * @param del
 * Function to free the content of the link. */
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return;
	while (alst[0])
	{
		ft_lstdelone(alst, del);
		alst[0] = alst[0]->next;
	}
	alst = NULL;
}
