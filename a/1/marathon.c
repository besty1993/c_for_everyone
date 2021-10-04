/* The distance of a marathon in kilometers
 * by Chase Yang
 * September 18, 2021
 */

#include <stdio.h>	// includes printf

int main(void)
{
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);
	printf ("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;	// return 0 means the program ended correctlly
}

