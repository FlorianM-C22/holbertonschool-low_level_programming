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
	if (d == NULL) /*If d is NULL return*/
		return;

	printf("Name: "); /*Print start of d->name*/
	if (d->name != NULL) /*If not NULL print name*/
		printf("%s\n", d->name);
	else
		printf("(nil)\n"); /*else print (nil)*/

	printf("Age: %f\n", d->age);

	printf("Owner: "); /*Print start of d->owner*/
	if (d->owner != NULL)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n"); /*else print (nil)*/
}
