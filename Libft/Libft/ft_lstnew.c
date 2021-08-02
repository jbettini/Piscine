#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *li;

	if(!(li = malloc(sizeof(t_list))))
		return (NULL);
	li->content = content;
	li->next = NULL;
	return (li);
}
