#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;
	int index;
	int total_len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_len = 0;

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	str = (char *)malloc(total_len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		int len = strlen(av[i]);

		strncpy(str + index, av[i], len);
		index += len;
		*(str + index) = '\n';
		index++;
	}
	*(str + index) = '\0';

	return (str);
}
