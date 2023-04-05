#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *	 two diagonals of a square matrix of integers
 * @a: array used
 * @size: size used
 */

void print_diagsums(int *a, int size)
{
	int d_sum = 0;
	int d_sum1 = 0;
	int num;

	for (num = 0; num < size; num++)
	{
		d_sum += *(a + num * size + num);
		d_sum1 += *(a + num * size + (size - num - 1));
	}
	printf("%d, %d\n", d_sum, d_sum1);
}
