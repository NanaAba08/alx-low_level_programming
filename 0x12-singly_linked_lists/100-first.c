#include <stdio.h>

void __attribute__((constructor)) fox(void);

/**
  * fox - Prints a string of characters before the
  * the main function is executed
  */
void fox(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
