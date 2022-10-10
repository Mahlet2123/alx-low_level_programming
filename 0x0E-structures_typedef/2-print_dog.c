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
		;
	if ((*d).name == NULL)
		printf("(nil)");
	if ((*d).age == NULL)
		printf("(nil)");
	if ((*d).owner = NULL)
		printf("(nil)");
	printf("Name: %s", d -> name);
	printf("Age: %f", d -> age);
	printf("Owner: %s" d -> owner);
}
