#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the variable we are to calculate the factorial
 * Return: n < 0 return -1 as an error
 *	if n > 0 return the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
