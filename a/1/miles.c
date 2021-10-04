#include <stdio.h>

int main(void)
{
	// Declaration with Initialization
	// 'int' means integer type: range +- 2 Billion
	int  miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards/1760.0);
	// 1. yards / 1760.0 : int / double -> double (floating point divide)
	// 2. miles + yards/1760.0 : int + double -> double
	// 3. 1.609 * (miles + yards/1760.0) : double
}
