#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *li;
	t_list *tmp;

	li = NULL;
	if(lst && f && del)
		while(lst)
		{
			tmp = ft_lstnew((*f)(lst->content));
			if(!tmp)
			{
				ft_lstclear(&li,del);
				return (NULL);
			}
			ft_lstadd_back(&li,tmp);
			lst = lst->next;
		}
	return (li);
}

