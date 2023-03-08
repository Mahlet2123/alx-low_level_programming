# 0x04. C - More functions, more nested loops
By: Julien Barbier

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

## Tasks

### 0. isupper
- mandatory
- Score: 100.0% (Checks completed: 100.0%)

Write a function that checks for uppercase character.

	Prototype: int _isupper(int c);
	Returns 1 if c is uppercase
	Returns 0 otherwise
	FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

	julien@ubuntu:~/0x04$ cat 0-main.c
	#include "main.h"
	#include <stdio.h>

	/**
	 * main - check the code.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    char c;

	    c = 'A';
	    printf("%c: %d\n", c, _isupper(c));
	    c = 'a';
	    printf("%c: %d\n", c, _isupper(c));
	    return (0);
	}
	julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
	julien@ubuntu:~/0x04$ ./0-isuper 
	A: 1
	a: 0
	julien@ubuntu:~/0x04$ 

