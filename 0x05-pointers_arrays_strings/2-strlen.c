#include "main.h"

/**
 * _strlen - this returns the length of a string
 * @s: string working on 
 * *
 * Return: this will give the  length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
