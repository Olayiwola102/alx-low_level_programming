#include <stdio.h>

#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}

	puts("Name: \n", (d->name != NULL) ? d->name : "(nil)");
	puts("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
