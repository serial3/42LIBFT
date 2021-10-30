#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*n;

	i = 0;
	n = lst;
	while (n != NULL)
	{
		i++;
		n = n->next;
	}
	return (i);
}
