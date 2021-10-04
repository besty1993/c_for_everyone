#include <stdio.h>

void count_down(int n)
{
	while (n>0)
	{
		printf("time is %d\n", n);
		n--;
	}

	printf("Blast Off\n");
}

void recursive_count_down(int n)
{
	if (n==0)
		printf("Blast Off\n");
	else
	{
		printf("time is %d\n", n);
		recursive_count_down(n-1);
	}
}

int main(void)
{
	count_down(10);
	recursive_count_down(10);
	return 0;
}
