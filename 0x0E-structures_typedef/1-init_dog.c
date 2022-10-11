#include "dog.h"

/**
 * init-dog - a function that initializes a variable of type struct dog
 * @d: 
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(*d));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
