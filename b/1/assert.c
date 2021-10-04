/* Use assert for program correctness
 *
 * macros in stdio.h, ctype.h + use of assert
 * 
 * - Some useful macros for preprocessing char or char* in [stdio.h]
 *   - #define getchar() getc(stdin)
 *     cf. stdin : assigned to input : get a character from the keyboard
 *     cf. getc(filename) : get char from named file
 *
 *   - #define putchar(c) putc((c),stdout)
 *     place character in output
 *
 *   - These let you do character preprocessing including white space
 *
 * - Macros for preprocessing in [ctype.h]
 *   - isalpha(c) : alphabet 	-> bool
 *   - isspace(c) : white space	-> bool
 *   - isdigit(c) : number	-> bool
 *   - islower(c) : lower case	-> bool
 *   - toupper(c) : make uppercase 
 *
 * #include <assert.h>
 * - This can be turned on and off witht eh flag called 'NDEBUG'
 * - assert(expr)
 *   - true : keep running
 *   - false: call about
 * - It canbe injected to test routine code
 *   and be used to prove that the program is correct
 */

// Defining NDEBUG flag makes assert not working.
// It should be defined before including assert.h
#define NDEBUG

#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	assert(0);
	printf("My program runs\n");
	return 0;
}
