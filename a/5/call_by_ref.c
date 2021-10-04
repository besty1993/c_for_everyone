#include <stdio.h>

void swap_by_val(int i, int j)
{
	int temp = i;
	i = j;
	j = temp;
}

// Call-by-reference
// Declare parameter as a pointer
void swap_by_ref(int *i, int *j)
{
	// Use dereferenced pointer in body
	// And pass in address
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main(void)
{
	int i = 2, j = 3;
	printf("i = %d, j = %d\n", i, j);

	swap_by_val(i, j);	
	printf("i = %d, j = %d\n", i, j);

	swap_by_ref(&i, &j);
	printf("i = %d, j = %d\n", i, j);
}
