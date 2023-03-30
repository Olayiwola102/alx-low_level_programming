#include "main.h"
/**
 * _strcmp - comparing two strings of pointers.
 * @s1: pointer one string to be compared.
 * @s2: pointrer two string for comparation.
 * Return: giving the difference between the two string.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
