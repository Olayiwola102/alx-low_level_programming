#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 * main - validate input
 * is_digits - to check if a string contains only digit
 * Return: no return.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	unsigned int result = 0;

	while (num2 > 0)
	{
		if (num2 & 1)
		{
			result += num1;
		}
		num1 <<= 1;
		num2 >>= 1;
	}
	return (result);
}
int is_digits(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
int main(int argc, char *argv[])
{
	unsigned int num1, num2;
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);
	printf("%u\n", result);
	return (0);
}
