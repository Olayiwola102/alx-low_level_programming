#include "main.h"
/**
*_memcpy - a function that copies memory
*@dest: memory where the content will be stored
*@src: memory where the content will be copied to
*@n: the number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	for (; c < i; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
