#include "main.h"

/**
 * print_line - prints line using "_" to draw a straight line
 *  *@n: length is the number of times the line is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
