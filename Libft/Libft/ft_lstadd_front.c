#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *start)
{
	if(alst)
	{
		if(*alst)
			start->next = *alst;
		*alst = start;
	}
}
