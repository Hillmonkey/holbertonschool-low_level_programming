#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char * buf;

	fd = open(filename, O_RDONLY);

	if(fd == -1 || !filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);	
	n = read(fd, buf, letters);
	buf[letters] = '\0';

	printf ("%s", buf);
	return (n);
}
