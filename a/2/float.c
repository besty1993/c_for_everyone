/* Float type
 * float, double, long double
 *
 * float : 10^-38 ~ 10^38 with 6 significant figures
 * ex) 0.123456e12
 *     In this example,
 *         0 is integer part
 *	   123456 is fractional part
 *	   e12 is the exponent part
 * 
 * double : 10^-308 ~ 10^308 with 15 significant figures
 * long double : same range with double, but 31 significant figures
 * 		 but system dependent
 *
 * LITERAL
 * 1.0, 1., 0.1e1 are all same
 */

#include <stdio.h>

int main(void)
{
	// 1.0, 1., 0.1e1, 1e0, 10e-1
	printf("1.0==1. : %d\n", 1.0==1.);
	printf("1.0==0.1e1 : %d\n", 1.0==0.1e1);
	printf("1.0==1e0 : %d\n", 1.0==1e0);
	printf("1.0==10e-1 : %d\n", 1.0==10e-1);

	// Significance in a computation precision
	printf("123e12+0.1==123e12 : %d\n", (123e12+0.1)==123e12);

	// Convension Characters
	double a = 1.23456;
	printf("%%e : %e\n", a);	// Scientific notation
	printf("%%f : %f\n", a);	// Normal float notation
	printf("%%g : %g\n", a);	// Shortest notation: e or f
	return 0;
}
