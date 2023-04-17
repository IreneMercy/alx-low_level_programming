#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog structure
 * @d: initialized variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name:(nil)\n");

		if (d->owner == NULL)
			printf("Owner:(nil)\n");

		if (d->age < 0)
			printf("Age:(nil)\n");

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
