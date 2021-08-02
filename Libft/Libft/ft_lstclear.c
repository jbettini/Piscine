#include "libft.h"

void ft_lstclear(t_list **alst, void (*del)(void*))
{
	t_list *li;
	
	li = *alst;
	if (alst)
		if(*alst)
		{
			while(li->next)
			{
				(*del)(li->content);
				free(li->content);

				li = li->next;
			}
			free((void*)*alst);
			*alst = 0;
		}
		else
		{
			free((void*)*alst);
			*alst = 0;
		}
	
}
