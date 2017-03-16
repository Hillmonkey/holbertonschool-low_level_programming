

int main(int argc,char *argv[])
{
	int a;
	
	if (argc != 4)
	{
		printf("error\n")
		exit (98);
	}
	a = (*get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);
	return (0);
}
