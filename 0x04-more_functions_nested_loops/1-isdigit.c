#include "main.h"
/**
 * _isdigit - checking if number is between 0 - 9
 * @c : integer to check
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
