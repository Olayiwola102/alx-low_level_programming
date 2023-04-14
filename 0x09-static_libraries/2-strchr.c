#include "main.h"
/**
* _strchr - Entry point
* @s: input
* @c: input
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	c = 0;

	for (; s[c] >= '\0'; c++)
	{
		if (s[c] == c)
			return (&s[c]);
	}
	return (0);
}
