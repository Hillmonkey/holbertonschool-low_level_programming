#include header
#include this-that-other

unsigned int binary_to_uint(const char *b);
{
	unsigned int sum =0, i =0;
	unsigned int power = 1;
	len = strlen(b);

	for(i = len-1; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (NULL);
		sum += atoi(str[i] * power;
		power *= 2:
	}
	return (sum)
}
