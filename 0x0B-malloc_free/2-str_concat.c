#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len;
	size_t s2_len;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concatenated = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return concatenated;
}
