#include <stdio.h>

int main(void)
{
	// Initializing array
	
	int arr_1[5];			// No initialization
	// Some computer might fill array with  0 automatically,
	// But you should not rely on that
	
	int arr_2[5] = {1,2,3,4,5};	// {1,2,3,4,5}
	int arr_3[5] = {0};		// {0,0,0,0,0}
	int arr_4[] = {1,2,3,4,5};	// {1,2,3,4,5}

	// In case of string
	// String is always a list of 'char' in C
	// And string list always ends with '\0', which called 'sentinel' 
	char str[] = "a b c";		// {'a',' ','b',' ','c','\0'}
	printf("str[0]: %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[2]: %c\n", str[2]);
	printf("str[3]: %c\n", str[3]);
	printf("str[4]: %c\n", str[4]);
	printf("str[5]: %c\n", str[5]);
	return 0;
}
