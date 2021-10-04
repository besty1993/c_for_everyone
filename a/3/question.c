/* Question Mark Operator
 * "?" 연산자는 ":" 연산자와 같이 옴
 * ex1) {{condition}}? {{value if true}}: {{value if false}};
 * ex2) {{condition1}}? {{value if condition1}}:
 *      {{condition2}}? {{value if condition2}}:
 *      {{value if false}};
 */
#include <stdio.h>

int main(void)
{
	int i=1, j=2;
	int n;
	
	printf("i=%d, j=%d\n\n", i, j);

	n = (i<j)? 4: 6;
	printf("n = (i<j)? 4: 6;\n");
	printf("n = %d\n\n", n);

	n = (i==j)? 4:(i<j)?3: 5;
	printf("n = (i==j)? 4:(i<j)?3: 5;\n");
	printf("n = %d\n\n", n);

	return 0;
}
