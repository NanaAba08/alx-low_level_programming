#include "main.h"

/**
  * create_file - A function that creates a file
  * @filename: A pointer to the name of the file to be created
  * @text_content: A pointer to a string to be written to the file
  * Return: 1 on success else -1
  */
int create_file(const char *filename, char *text_content)
{
	int fx, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fx = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(fx, text_content, len);

	if (fx == -1 || z == -1)
		return (-1);
	close(fx);
	return (1);
}
