/* [Coursera] C for Everyone
 * Week 2 Assignment
 * Sine function for an input x between (0,1)
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	// Get input x
	double x = 0.0;
	printf("input x: ");
	scanf("%lf", &x);
	
	// Verify x range
	if ((x >= 1.0) || (x <= 0.0)) {
		printf("the input range should be between (0,1)\n");
		return 2;
	}

	// Compute and print sine value
	double y = sin(x);
	printf("sin(x) = %lf\n", y);
	
	return 0;
}
