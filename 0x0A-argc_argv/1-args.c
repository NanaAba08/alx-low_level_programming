#include "main.h"
#include <stdio.h>

/**
  * main - Print the number of arguments passed to the program
  * @argc: the number of arguments
  * @argv: array of arguments
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
