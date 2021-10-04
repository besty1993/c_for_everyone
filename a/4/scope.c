/* Function definitions and scope rules
 *
 * The declarations are valid only in the block.
 * A lifetime of identifier ends with the blcok.
 * 
 * Once one identifier's lifetime is over,
 * that identifier name can be declared again.
 * 
 * If there are multiple use of same identifier name in nested blocks,
 * The inner identifier name hides outer identifier name
 */
#include <stdio.h>

int main()
{
	// Parallel blocks
	{
		// Lifetime of 'i' starts
		int i = 10;
		printf("1st i: %d\n", i);
	}	// Lifetime of 'i' ends

	{
		// Lifetime of 2nd 'i' starts
		int i = 20;
		printf("2nd i: %d\n", i);
	}	// Lifetime of 2nd 'i' ends

	// Nested blocks
	{
		// Lifetime of 'a' starts
		int a = 10;
		printf("'a' of outer block: %d\n", a);

		{
			// Lifetime of 'b' starts
			int b = 15;
			printf("'a' of inner block: %d\n", a);
			printf("'b' of inner block: %d\n", b);

			// New 'a' is declared
			// Inner 'a' hides outer 'a'
			// Lifetime of inner 'a' starts
			int a = 50;
			printf("'a' after inner declaration: %d\n", a);

		}	// Lifetime of inner 'a' and 'b' ends
		
		// 'a' became outer 'a' again
		printf("'a' after inner block: %d\n", a);

		// Identifier 'b' no longer exists
		// printf("'b' after inner block: %d\n", b);
	}
	return 0;
}
