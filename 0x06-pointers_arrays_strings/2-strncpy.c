#include "main.h"

/**
 * _strncpy - to concatenate two strings
 *	by making use of n  bytes from string src into dest.
 * @dest: input .
 * @src: The source string.
 * @src: input value  src.
 * Retur: returning dest.
 */

char *_strncpy(char *dest, char *src, int j)
{
	int i;

	for (i = 0; i < j && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < j; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
