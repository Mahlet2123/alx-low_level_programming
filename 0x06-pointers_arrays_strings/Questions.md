# 0x06. C - More pointers, arrays and strings
By: Julien Barbier

## Learning Objectives

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

### 0. strcat
- mandatory
- Score: 100.0% (Checks completed: 100.0%)

Write a function that concatenates two strings.

	Prototype: char *_strcat(char *dest, char *src);
	This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	Returns a pointer to the resulting string dest
	FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
