/* C for Everyone
 * Compute the average weight for a population of elephant seals
 */
#include <stdio.h>
#define MAX 10000

int read_data(int arr[])
{
	/*
	 * Read data and fill array, get array length
	 */
	int idx = 0;
	int data;
	
	while (scanf("%d", &data) == 1)
	{
		arr[idx] = data;
		idx++;
	}

	return idx;
}

double average(int arr[], int len)
{
	/*
	 * Get average of the input array
	 */

	int idx = 0;
	double sum = 0.;

	for (idx=0; idx<len; idx++)
	{
		sum += arr[idx];
	}

	return sum/len;
}

int main(void)
{
	int weight_arr[MAX] = {0};
	int length = read_data(weight_arr);
	
	// Verify the array and its item
	printf("length of array : %d\n", length);
	printf("1st item of array : %d\n", weight_arr[0]);
	printf("last item of array : %d\n", weight_arr[999]);

	double average_weight = average(weight_arr, length);
	printf("The average weight : %f\n", average_weight);

	return 0;
}
