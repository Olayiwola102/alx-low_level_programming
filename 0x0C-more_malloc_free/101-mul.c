#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * multiply - determines if any number is zero
 * @num1: argument vector.
 * @num2: argument
 * main - validate input and check the argument.
 * @argv - argument
 * @argc - argument
 * isNumeric - to check if a string contains only digit
 * @str - argument
 * Return: no return.
 */
unsigned int multiply(unsigned long long int num1, unsigned long long int num2)
{
	return (num1 * num2);
}
/**
 * isNumeric - validate input
 * @str: string
 * Return: 0
 */
int isNumeric(const char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - check for correct argument
 * @argv: argument
 * @argc: argument
 * Return: 0
 */
int main(int argc, char *argv[])
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (98);
		}
		if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
		{
			printf("Error\n");
			return (98);
		}
		unsigned long int num1 = strtoull(argv[1], NULL, 10);
		unsigned long int num2 = strtoull(argv[2], NULL, 10);
		unsigned long int result = multiply(num1, num2);

		printf("%llu\n", result);
		return (0);
	}
