#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/** 
 * main - emtry point
 *
 * Return: 0
 */
int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	
	if (n>5)
		printf("if the last digit of %d is %1d greater than 5\n" ,n ,n%10);
	else if (n==0)
		printf("if the last digit of %d is %1d 0\n" ,n ,n%10);
	else
		printf("if the last digit of %d is %1d less than 6 and not 0\n" ,n ,n%10);
	return (0);

}
