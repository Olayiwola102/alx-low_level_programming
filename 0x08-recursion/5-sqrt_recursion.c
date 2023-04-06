#include "main.h"

/**
 * _sqrt_recursions -  returns the natural square root of a number
 * @n: the variable to get the square
 * @small: small variable
 * @big: big variable
 * Return: if does not have natural number returen -1
 *	else give the square of the number
 */

int _sqrt_recursions(int n, int small, int big)
{
	int sqr, interval;

	if (small > big)
	{
		return (-1);
	}
	interval = (small + big) / 2;
	sqr = interval * interval;

	if (sqr == n)
	{
		return (interval);
	}
	if (sqr < n)
	{
		return (_sqrt_recursions(n, interval + 1, big));
	}
	else
	{
		return (_sqrt_recursions(n, small, interval - 1));
	}
}
/**
 * _sqrt_recursion - recursive square root of a number
 * @n: value
 * Return: return the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursions(n, 0, n));
}
