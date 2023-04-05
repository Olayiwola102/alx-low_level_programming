#include "main.h"
/**
 *
 * _strchr - the entry point in the program
 * @s: variable to take input
 * @c: variable to take input
 * Return: Always give 0 as (success)
 *
 */
char *_strchr(char *s, char c)
{
	int num = 0;

	for (; s[num] >= '\0'; num++)
	{
		if (s[num] == c)
			return (&s[num]);
	}
	return (0);
}
