/* C for Everyone
 * Week 3 Assignment 2
 * Print a table of values for sine and cosine between (0,1)
 */

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
	printf("ANGLE\t\tSINE\t\tCOSINE\n");

	// Define and initialize variables
	double interval = 0.1;		// Interval of angle for loop
	double angle = interval;	// Initial angle for sin and cos
	double sin_value = 0.0;		// Initialize sin value
	double cos_value = 0.0;		// Initialize cos value

	// Generate table
	// sin and cos are between (0,1) when angle is between (0,pi/2)
	while (angle < 0.5 * PI)
	{
		// Compute sin and cos
		sin_value = sin(angle);
		cos_value = cos(angle);

		// Generate one row of table
		printf("%lf\t", angle);
		printf("%lf\t", sin_value);
		printf("%lf\n", cos_value);

		// Add interval to angle
		angle += interval;
	}

	return 0;
}
