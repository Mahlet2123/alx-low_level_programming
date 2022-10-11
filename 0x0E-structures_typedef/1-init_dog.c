#include <stddef.h>
#include "dog.h"
/**
 * init_dog- initialize a variable of type struct dog
 * @d: variable
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
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
}
