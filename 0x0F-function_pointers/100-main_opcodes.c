#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: count of args
 * @argv: array of args
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int n, bytes;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (char *)main;
	for (n = 0; n < bytes - 1; n++)
		printf("%02hhx ", addr[n]);
	printf("%02hhx\n", addr[n]);
	return (0);
}
