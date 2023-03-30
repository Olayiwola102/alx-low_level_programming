#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: represent the number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int init;
	int final;

	for (init = 0; init < n--; init++)
	{
		final = a[init];
		a[init] = a[n];
		a[n] = final;
	}
}
