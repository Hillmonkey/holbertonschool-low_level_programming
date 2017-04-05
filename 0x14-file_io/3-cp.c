#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * cp - copy file_from to file_t
 * @ac: number of arguments passed, incuding name of program, 0-indexed
 * @av: array of strings containing arguments passed in
 * Return: between 97 and 100 represent varioius errors,
 **/
int cp(int ac, char **av)
{
	char buf[BUF_SIZE];
	ssize_t ret1 = 0, ret2 = 0;
	ssize_t fd1; /* file descriptor for file_from */
	ssize_t fd2; /* file descriptor for file_to */

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (av[1] == NULL || av[1][0] == '\0' || fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", av[1]);
		return (98);
	}
	fd2 = (open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664));
	if (av[1] == NULL || av[1][0] == '\0' || fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error; Can't write to %s", av[2]);
		return (99);
	}

	/* assume that everything fits in one buffer */
	ret1 = read(fd1, buf, BUF_SIZE);
	if (ret1 < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", av[1]);
		return (98);
	}
	ret2 = write(fd2, buf, ret1);
	if (ret2 < 0)
	{
		dprintf(STDERR_FILENO, "Error; Can't write to %s", av[2]);
		return (99);
	}
	if (close(fd1 < 0) || (close(fd2 < 0)))
		return (100);
	return (0);
}
