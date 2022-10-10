#include <stdio.h> 
#include "dog.h"
/**
 * print_dog- prints a struct dog
 * @d: variable
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	if (d->name == NULL)
		printf(" (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if ((d->owner = NULL))
		printf(" (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
