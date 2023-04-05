#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the fist variable
 * @accept: the second variable
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
		if (*s == accept[num])
		return (s);
		}
	s++;
	}
	return ('\0');
}
