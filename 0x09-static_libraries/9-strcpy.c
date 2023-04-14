#include "main.h"
/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; c < i ; c++)
	{
		dest[c] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}
