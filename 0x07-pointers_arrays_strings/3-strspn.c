#include "main.h"
/**
 * _strspn - printing of some consecutive character in a variable
 * @s: the searching strings
 * @accept: the input string
 * Return: give the length as succes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				num++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
