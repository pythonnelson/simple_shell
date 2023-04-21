#include "shell.h"

/**
 * bfree - this frees up a pointer and NULLs the address
 * @ptr: the address of the pointer to free
 *
 * Return: 1 if it is freed, else return 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
