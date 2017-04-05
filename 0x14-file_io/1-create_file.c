#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - create a file with content, following some rules
 * @filename: name of file to be created
 * @text_content: string to put into file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	ssize_t fd;
	ssize_t n;

	if (text_content = NULL || *text_content == '\0')
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	n = write(fd, text_content, len);
	if (n < 0)
		return (-1);
	if (close(fd) < 0)
		return (-1);
	return (1);
}
