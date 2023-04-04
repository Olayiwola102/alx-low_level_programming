#include "main.h"
/**
 * _memcpy - this works by copying memory address
 * @dest: this is the addres where its stored
 * @src: it copy from this error
 * *@n: these are the bytes
 *
 * Return: give output
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int var = 0;
	int a = n;

	for (; var < a; var++)
	{
		dest[var] = src[var];
		n = n + 1;
	}
	return (dest);
}
