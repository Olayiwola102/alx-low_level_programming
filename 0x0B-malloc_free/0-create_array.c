#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars type,
 * and initializes it with a specific char
 * @size: size of the array to be created
 * @c: char to initialize the array c
 *
 * Return: pointer to the array return (Success), NULL will return (Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
