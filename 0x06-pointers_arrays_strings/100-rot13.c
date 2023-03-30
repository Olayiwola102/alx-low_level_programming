#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int ind = 0;
	int j;

	while (*(str + ind) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(str + ind) == a[j])
			{
				*(str + ind) = rot[j];
				break;
			}
		}
		ind++;
	}
	return (str);
}
