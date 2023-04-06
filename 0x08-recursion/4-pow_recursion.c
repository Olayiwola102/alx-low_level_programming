#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to be returned
 * @y: power to be on the variable x
 * Return: if y < 0 return -1
 *	else return the value of y by using x a power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
