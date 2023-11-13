#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *print_dog - prints a struct dog
 *@d: pointer to variable dog
 */
void print_dog(struct dog *d)
{
	if (d->age == '\0')
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
