#include "main.h"
/**
 * _memset - this fills up a block of memory with a data
 * @b: the value
 * @n: numbers of bytes to be changed
 * @s: the satrting othe address memory
 * Return: Replace with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
		return (s);
}


