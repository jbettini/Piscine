#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free((void*)lst);
	lst = 0;
}
