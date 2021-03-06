#include "holberton.h"

/**
 * main - copies file_from to file_to
 * @ac: number of arguments passed, incuding name of program, 0-indexed
 * @av: array of strings containing arguments passed in
 * Return: between 97 and 100 represent varioius errors 0 = success
 **/
int main(int ac, char **av)
{
	char buf[BUF_SIZE];
	int ret1 = 1, ret2 = 0;
	int fd1; /* file descriptor for file_from */
	int fd2; /* file descriptor for file_to */
	mode_t w_mode;

	w_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd2 = (open(av[2], O_WRONLY | O_CREAT | O_TRUNC, w_mode));
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (ret1 > 0)
	{
		ret1 = read(fd1, buf, BUF_SIZE);
		if (ret1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (ret1 > 0)
			ret2 = write(fd2, buf, ret1);
			if (ret2 == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
