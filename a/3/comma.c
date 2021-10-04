/* Comma Separater & Comma Operator
 *
 * Comma 연산자는 두 개의 표현식을 하나로 결합하는 연산자
 * 연산자 중 우선순위가 가장 낮은 연산자
 * 첫번 째 표현식을 먼저 평가 후 다음 표현식 평가 > Sequence Point 역할
 */

#include <stdio.h>

int main(void)
{
	/* Comma as separator
	 */
	int i, j;
	int a = 0, b = 1;

	/* Comma as Operator
	 */
	a = 20, b = 2 * a; // 20을 i에 대입한 채 j 연산 수행
	printf("a=20,b=2*a; a = %d, b = %d\n", a, b);

	i = 10, 20; // i = 10 연산 수행 후 20 연산 수행
	printf("i=10,20; i = %d\n", i);

	j = (10, 20); // 10 연산 후 20 연산, 이후 j 대입
	printf("j=(10,20); j = %d\n", j);

	return 0;
}
