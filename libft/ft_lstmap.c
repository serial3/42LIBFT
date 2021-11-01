#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	temp = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp->next = ft_lstnew(f(lst->content));
		temp = temp->next;
		if (temp == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
	}
	temp->next = NULL;
	return (new_list);
}
