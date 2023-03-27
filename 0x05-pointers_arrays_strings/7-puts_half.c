#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	_putchar(longi);
}
