#include <stdio.h>

int main(void)
{
	int a[] = {1, 2, 3, 4};
	char c[] = {'a', 'b', 'c', 'd'};
	long int i,j;

	
	puts("start");

	printf("%d\n", sizeof(a));
	printf("%ld\n",sizeof(a[0]));
	printf("%d\n", sizeof(c));
	printf("%ld\n",sizeof(c[0]));
	printf("%ld\n",sizeof(0));
	printf("%d\n",sizeof(0));

	puts("next level shiznitz");
	printf("%ld\n", a + 1);
	printf("%ld\n", a[0] + 1);

	puts("The compiler might get heartburn ...");
	printf("%ld\n", &a[0]);
	printf("%ld\n", &0[a]);

	return(0);
}
