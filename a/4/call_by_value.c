/* Function variables : call by value
 * 
 * Once function is invoked:
 * 1. Each expression in argument list (parameters) is evaluated
 *    ex) 'm' is 5
 * 2. Conversion if necessary to type of parameter
 *    ex) if input is 3.5, then it is converted to int 3
 * 3. [Call by value] We call 'n_local' as what is used inside
 *    execution of function. ex) n_local = n;
 *    So, the real 'n' value is never changed even if 'n' value goes to 0
 *    Only local value is changed.
 * 4. The function body is then executed
 * 5. When return statement is encountered,
 *    the function exits to where the function was called
 * 6. If there is return expression,
 *    then value of return converted to type of the function
 * 7. If there is no return,
 *    it is as if 'return;' was last statement of the function code block
 */
#include <stdio.h>

int compute_sum_to_n(int n)
{
	int sum = 0;
	
	// The input variable 'n' is decreased to zero
	for( ; n>0; n--)
		sum += n;

	return sum;
}

int main(void)
{
	int m = 20;
	printf("sum_to_m : %d\n", compute_sum_to_n(m));
	
	// The input variable 'm' didn't change
	printf("m : %d\n", m);
}
