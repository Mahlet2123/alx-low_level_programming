#include <stdlib.h>
#include "main.h"
/**
* _realloc-reallocates a memory block using malloc and free
*@ptr:pointer
*@old_size: old size
*@new_size:new size
* Return:pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
