#include "main.h"

/**
 * _divisible - Checks if a number is divisible.
 * @n: number to be check
 * @divisor: the divisor to divide the values
 * Return: if divisible return  -0.
 *         if divisible return -1.
 */

int _divisible(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (_divisible(n, divisor + 1));
}
/**
 * is_prime_number - checks if the value gotten is prime
 * @n: the value to be checked
 * Return: give 0 if not prime
 *	give -1 for prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_divisible(n, 2));
}
