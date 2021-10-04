#include <stdio.h>

int main(void)
{
	// Create a variable in memory
	// The memory needs to be as many bytes as to store the value
	// And there is an address for the memory where the value is stored
	// ex) int data[4] = {2,4,6,8};
	// Let the first item 2 is stored at address 7006
	// Since int type takes 4 bytes, item 4 address is 7010
	// 6 is stored in 7014, 8 is stored in 7018
	int a = 6;

	// Pointer
	//
	// int *p = &a;
	// -> Initialize this 'p' pointer to where 'a' is stored
	// int : underlying type
	// & : address of 'a'
	// 'a' must be int, which is underlying type
	int *p = &a;

	printf("p : %ls \n", p);
	printf("*p : %d \n", *p);
}
