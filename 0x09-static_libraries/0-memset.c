#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory
 * @b: value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}

