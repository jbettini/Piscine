#include "libft.h"

void ft_lstclear(t_list **alst, void (*del)(void*))
{
	t_list *li;
	
	li = *alst;
	if (alst)
		if(*alst)
			while(li)
			{
				li = li->next;
				(*del)((*alst)->content);
				free((void*)*alst);
				*alst = 0;
				*alst = li;
			}
}
