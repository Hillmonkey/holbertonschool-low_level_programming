#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - reads and outputs a given number of characters of a text file
 * @filename: string name of file to be worked with
 * @letters: number of letters to be read
 * Return: Number of characters actually printed, or 0 on an error
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || !filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	n = read(fd, buf, letters);
	buf[letters] = '\0';

	printf("%s", buf);
	return (n);
}
