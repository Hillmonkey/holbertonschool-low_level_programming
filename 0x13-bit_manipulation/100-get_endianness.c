/**
 * get_endianness - determine whether a computer is big endian or not
 * Return: int ()
 **/


int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	return (*y);
}
