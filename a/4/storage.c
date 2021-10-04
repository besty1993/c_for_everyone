/* Storage class
 *
 * storage classes like extern, static are used
 */
#include <stdio.h>

// 'extern' means, this item shoud exist throughout
// the executeion of code and is available in any of the functions.
extern int reps = 0;

void f(void)
{
	// 'static' is used
	// Once this item is declared and initialized,
	// every time this item is called, that value is going to be
	// whatever its last exited value is.
	// ex) 1st time called: called = 0, 2nd time called: called = 1
	static int called = 0;

	printf("f called %d\n", called);
	called++;
	reps = reps + called;
}

int main(void)
{
	auto int i = 1;

	// Const is not a storage class
	// Initial value is to remain that value throughout.
	// This value in here cannot be changed
	const int Limit = 10;

	for (i=1; i<Limit; i++)
	{
		printf("i local = %d, reps global = %d\n",
				i, reps);
		f();
	}

	return 0;
}

