/* The C preprocessor
 *
 * '#' in column 1 announces a preprocessor command
 * ex) #include <stdio.h>, #include <math.h>
 *
 * ## INCLUDE
 * If angled bracket (<>) comes after '#include',
 * It means that it uses 'standard header file'.
 * It is typically found in /usr/include
 *
 * If there is no angled bracket, then it is custom header file
 * ex) #include mycode.h
 *
 * ## DEFINE
 * ex) #define C 2991235.123
 * Powerful feature but dangerous cuz there is no type checking or legal expression checking
 * It can do even such things like examples, but it is very risky
 * - example 1
 *   #define EQ ==
 *   ...
 *   if (a EQ b)
 * - Example 2
 *   #define SQ(x) ((x)*(x))
 *   SQ(y+3)   ->   ((y+3)*(y+3)) = y^2+6y+9
 * - Example 3: Caution
 *   #define SQ(x) x*x
 *   SQ(y+3)   ->   y+3*y+3 = y+3y+3 = 4y+3
 *
 * cf. "gcc -E file.c"
 *   - This will show the actual c code after the preprocessr.
 *   - It would be recommended to put this option when compile
 *
 * Nowadays, using MACRO of preprocessor is not recommended.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEPHANT_SEAL_WT_MALE	8800
#define MIN_ELEPHANT_SEAL_WT_MALE	4400

#define RANGE		4400
#define POPULATION	1000
#define WEIGHT_OVER	rand()% RANGE
#define WEIGHT		WEIGHT_OVER + MIN_ELEPHANT_SEAL_WT_MALE
#define FILL		for (i=0; i<POPULATION; i++) \
			       data[i] = WEIGHT
// Multi-line macro is also possible

void print_data(int d[], int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		printf("%d\t", d[i]);
		if ((i+1)%10 == 0) printf("\n");
	}
}

int main()
{
	int i;
	int data[POPULATION];
	srand(time(0));
	FILL;
	print_data(data, POPULATION);
	printf("\n\n");
	return 0;
}
