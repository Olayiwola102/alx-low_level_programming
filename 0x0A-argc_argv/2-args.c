#include <stdio.h>

/**
 * main - prints all the arguments it receives
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
