#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first the value which is an integer value
 * @b: pointer to the second value which is an integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

