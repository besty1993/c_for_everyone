#include <stdio.h>

int main(void)
{
	/* Char type is 1 byte
	 * Char type can be only one letter
	 * Char type includes...
	 * - Letters like a-z, A-Z
	 * - Digits like '1', '2', ...
	 * - Non-printing characters like '\n', '\a'
	 *
	 * Each char value is considered as ASCII value
	 * ASCII value range is 0 to 127, which is 1 byte
	 *
	 * 'A' in int value : 65
	 * 'Z' in int value : 90
	 * 'a' in int value : 97
	 * 'z' in int value : 122
	 * '0' in int value : 48
	 * '9' in int value : 57
	 * '[': 91, '+': 43, '$': 36, ...
	 * '\n': 10 (new line advance)
	 * '\a': 7 (ring bell)
	 */
	char a = 'A';
	printf("char 'A' in ASCII : %d\n", a);
	printf("char 'A' the char : %c\n", a);
	printf("Three consecutive chars are : %c%c%c \n", a, a+1, a+2);
	printf("Three bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
	
	printf("0 in char : %c\n", (char) 0);
	printf("1 in char : %c\n", (char) 1);
	printf("2 in char : %c\n", (char) 2);
	printf("3 in char : %c\n", (char) 3);
	printf("4 in char : %c\n", (char) 4);
	printf("5 in char : %c\n", (char) 5);
	printf("6 in char : %c\n", (char) 6);
	printf("7 in char : %c\n", (char) 7);
	printf("8 in char : %c\n", (char) 8);
	printf("9 in char : %c\n", (char) 9);
	printf("10 in char : %c\n", (char) 10);
	printf("65 in char : %c\n", (char) 65);
	return 0;
}
