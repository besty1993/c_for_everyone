/* C For Everyone
 * COnversion of Fahrenheit to Celsius
 *
 * C = (F-32)/1.8
 * Chase Yang
 * September 18, 2021
 */
#include <stdio.h>

int main(void)
{
	int fahrenheit, celsius;

	printf("Fahrenheit as an integer: ");
	scanf("%d", &fahrenheit);		// %d is used for int

	// The computation is done after conversion from int to double, cuz 1.8 is double
	// And then it is re-converted from double to int, since variable 'celsius' is integer
	celsius = (fahrenheit - 32)/1.8;

	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;
}
