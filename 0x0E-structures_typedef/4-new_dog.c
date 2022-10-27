#include "dog.h"
/**
 * new_dog- creates a new dog.
 * @d: variable
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int x;

	if (d == NULL)
	{
		;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	(d + 1) = malloc(sizeof(dog_t));
	(d + 1)->name;
	(d + 1)->age;
	(d + 1)->owner;
	if ((d + 1) == NULL)
		return (NULL);
	return (dog_t);
}
