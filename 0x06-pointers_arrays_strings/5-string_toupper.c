#include "main.h"

/**
 * string_toupper - Changing of  all lowercase letters
 * string to uppercase.
 * @str: The string to be converted to upper.
 * Return: A pointer handling the string..
 */

char *string_toupper(char *str)
{
	int l = 0;

	while (str[l])
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] -= 32;
		}

		l++;
	}

	return (str);
}
