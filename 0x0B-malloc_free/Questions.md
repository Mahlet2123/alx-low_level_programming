# 0x0B. C - malloc, free
By: Julien Barbier

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

## Tasks
### 0. Float like a butterfly, sting like a bee
- mandatory
- Score: 100.0% (Checks completed: 100.0%)

Write a function that creates an array of chars, and initializes it with a specific char.

	Prototype: char *create_array(unsigned int size, char c);
	Returns NULL if size = 0
	Returns a pointer to the array, or NULL if it fails
