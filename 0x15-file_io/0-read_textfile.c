#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - A function that reads text file to print to STDOUT
  * @filename: The text file to be read
  * @letters: The number of letters to be read and printed
  * Return: the actual number of letters it can read and print
  * or 0 if it fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fx, y, z;

	fx = open(filename, O_RDONLY);
	if (fx == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fx, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(fx);
	return (z);
}
