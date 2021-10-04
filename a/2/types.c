#include <stdio.h>

int main(void)
{
	/* One funky thing of C is that
	 * the size of type can be differ by computer.
	 * A computer can have int size of two bytes,
	 * Super computer might have int size of 16 bytes
	 */
	printf("sizeof(char): %ld\n", sizeof(char));
	printf("sizeof(int): %ld\n", sizeof(int));
	printf("sizeof(long): %ld\n", sizeof(long));
	printf("sizeof(long int):%ld\n", sizeof(long int));
	printf("sizeof(unsigned int): %ld\n", sizeof (unsigned int));
	printf("sizeof(float):%ld\n", sizeof(float));
	printf("sizeof(double):%ld\n", sizeof(double));
	printf("sizeof(long double):%ld\n", sizeof(long double));
	
	int a = 1;
	printf("int a=1; sizeof(a): %ld\n", sizeof(a));

	char b = '\n';
	printf("char b = '\\n'; sizeof(b): %ld\n", sizeof(b));
	return 0;
}
