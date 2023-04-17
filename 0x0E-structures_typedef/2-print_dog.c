#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	if (d->name == NULL)
		d->name = "(nil)";
	
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
