#include "main.h"

/**
 * leet - changing string into number
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}

	return (s);
}
