/* Operators
 * 
 * There are 16 levels of precedence of operators
 * Some of them are low level, in which tend to happen later or last.
 * For example, assignment
 *
 * On the other hand, some expressions like unary operatiors have high precedences
 *
 * Associativity is also important
 * ex) a+b+c : ((a+b)+c)
 * ex) a=b=c=3 : (a=(b=(c=3)))
 * [Primary Expression Operators
 * - Associativity : left to right
 * ex) () [] -> expr++ expr--
 *
 * [Unary Operators]
 * - Needs only one value
 * - Associativity : right to left
 * * & + - ! ~ ++expr --expr sizeof
 *
 * [Binary Operators]
 * - Needs two values
 * - Associativity : left to right
 * * /% + - >> << > < <= >= == != &, ^, |, &&, ||
 * cf. '&' here means 'bit wise', '&' above means 'address of'
 * cf. C has these kind of overuse of symbols
 *
 * [Ternary Operator]
 * - Associativity : right to left
 * ?:
 *
 * [Assignment Operator]
 * - Associativity: right to left
 * = += -= *= /= %= >>= <<= &= ^= |=
 *
 * [Comma Operator]
 * - Associativity: left to right
 * ,
 */

#include <stdio.h>

int main(void)
{
	printf("3*5+2=%d\n",3*5+2);
	printf("3*(5+2)=%d\n",3*(5+2));
	printf("-5%3=%d\n",-5%3);
	printf("8==-8 : %d\n",8==-8);
	printf("8==-(-8) : %d\n", 8==-(-8));
	printf("3.0/5 : %lf\n", 3.0/5);
	printf("3/5.0 : %lf\n", 3/5.0);
	
	// Pre/Post increment
	int a=1,b=2,c=0,d=0;
	printf("\na=%d, b=%d, c=%d, d=%d\n",a,b,c,d);
	// Pre-increment
	// a=++b; same as {b=b+1; a=b;}
	
	// Post-increment
	// a=b++; same as {a=b; b=b+1;}
	
	c = ++a;
	printf("c = ++a; a=%d, c=%d\n",a,c);

	d = b++;
	printf("d = b++; b=%d, d=%d\n",b,d);
}
