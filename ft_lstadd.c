#include "libft.h"

/** @brief
 * Adds the element new at the beginnning of the list.
 * @param alst
 * The address of a pointer to the first link of a list.
 * @param new
 * The link to add at the beginning of the list. */
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = alst[0];
	alst[0] = new;
}
