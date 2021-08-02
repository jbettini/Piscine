#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *res;

	if (!(res = malloc(count * size)))
		return (NULL);
	if (size <= 0 || count <= 0)
		return (NULL);
	else 
		while(size != 0)
			((unsigned char*)res)[size--] = 0;
	return (res);
}
