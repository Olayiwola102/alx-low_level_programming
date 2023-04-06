#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the variable to get the square
 * Return: if does not have natural number returen -1
 *	else give the square of the number
 */
int _sqrt_recursion(int n)
{
	int m = 1;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	while (m * m <= n)
	{
		m++;
	}
	return (_sqrt_recursion(n - (m - 1) * (m - 1)));
}
/**
 * _sqrt_recursion - recursive the square root
 * @n: the variable n 
 * Return: give the square root of the number
 */
int _sqrt_recursion(int n)
{
	int m = 1;
	while (m * m <= n)
	{
		m++;
	}
	return (_sqr_recursion(n - (m - 1) * (m - 1)));
}
