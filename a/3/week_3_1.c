#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
	double interval;
	int i;
	for (i = 0; i <30; i++)
	{
		interval = i/10.0;
		printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
	}
	int a=1, b=2;
	int n=(a==b)? 4:(a<b)? 3:5;
	printf("%d",n);

	printf("\n+++++++\n");
	return 0;
}
