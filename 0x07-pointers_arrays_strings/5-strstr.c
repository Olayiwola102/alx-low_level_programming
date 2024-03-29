#include "main.h"
/**
 * _strstr - function that locate a sub string
 * print_chessboard - function to locate a substring
 * @haystack: strong to be searched for
 * @needle: target substring to search for
 * Return: pointer to that point to the string a the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coincidence - determine if string b is found in a.
 * @a: string
 * @b: string
 * Return: 1 if there is coincidence, otherwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
