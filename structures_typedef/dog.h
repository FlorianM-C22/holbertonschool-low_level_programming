#ifndef __protect__
#define __protect__

/**
 *struct dog - Woof !
 *@name: name of my dog
 *@age: age of my dog
 *@owner: me
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
