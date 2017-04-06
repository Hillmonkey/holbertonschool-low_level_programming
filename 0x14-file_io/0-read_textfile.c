#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - output contents of text file to STDOUT
 * @filename: string name of file (tested in CWD)
 * @letters: length of file in chars
 * Return: actual number of chars printed
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t n = 0;
	char *buf;
	ssize_t tmp;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	tmp = n;

	buf[n] = '\0';

	/* printf("%s", buf); */
	n = write(STDOUT_FILENO, buf, n + 1);
	if (n == -1)
		return (0);
	if (close(fd) < 0)
		return (0);
	free(buf);
	return (tmp);
}
