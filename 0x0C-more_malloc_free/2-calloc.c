#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of element in array
 * @size: size of byte
 *
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *result;
	unsigned char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	result = malloc(total_size);

	if (result == NULL)
	{
		return (NULL);
	}
	p = (unsigned char*)result;
	for (i = 0; i < total_size; i++)
	{
		*p++ = 0;
	}
	return (result);
}
