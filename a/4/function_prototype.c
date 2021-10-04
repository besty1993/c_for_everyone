#include <stdio.h>

// Function prototypes
double cube_1(double x);	// Function can be declared like this beforehand
double cube_2(double);		// Or no identifier is needed for parameter

int main(void)
{
	int a = 8;
	printf("%f", cube_1(a));
	printf("%f", cube_2(a));

	return 0;
}

double cube_1(double x)
{
	return x*x*x;
}

double cube_2(double x)
{
	return x*x*x;
}
