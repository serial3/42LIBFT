#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*n;

	n = lst;
	if (n == NULL)
		return (NULL);
	if (n->next == NULL)
		return (n);
	while (n != NULL)
	{
		if (n->next == NULL)
			return (n);
		n = n->next;
	}
	return (NULL);
}
