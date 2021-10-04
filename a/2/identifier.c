/* Identifiers
 * 
 * Identify function or variable
 * ex) main
 *
 * Rule to name identifiers
 * - cd ::= {letter|underscore}_1
 *          {letter|underscore|digit}_0+
 * - The first letter of the identifier is letter or underscore
 * - The following letters can be either letter, underscore, or digit, or none
 * ex) k, _printf, two_words, twoWords, sample_23
 * but not) #me, me#, -x, 23my_dna
 *
 * Good IDs make document more readable
 * ex) main, sqrt, pritf, radius, superman, i, etc...
 * but not) grx33, __pp__25, i_am_forewords, ...
 */

#include <stdio.h>

// 'main' is identifier
int main(void)
{
	//'radius' and 'area' are identifiers
	int radius = 0, area = 0;
	return 0;
}
