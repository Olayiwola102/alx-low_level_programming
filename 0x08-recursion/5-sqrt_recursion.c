#include "main.h"

/**
 * _sqrt_recursions -  returns the natural square root of a number
 * @n: the variable to get the square
 * @sqr: value used
 * Return: if does not have natural number returen -1
 *	else give the square of the number
 */

int _sqrt_recursions(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	if (sqr * sqr > n)
	{
		return (-1);
	}
	return (_sqrt_recursions(n, sqr + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: variable used
 * Return: return the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursions(n, 0));
}
