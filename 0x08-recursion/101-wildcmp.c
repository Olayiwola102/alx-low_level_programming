#include "main.h"
#include <string.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if the strings can be considered identical
 * else return 0
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		while (*s2 == '\0')
		{
			s2++;
		}
		return (*s2 == '\0');
	}
	if (*s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
