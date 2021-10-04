/* C for Everyone: Structured Programming
 * Week 4 Assignment
 *
 * Open and read a file of integers into an array
 * that is created with the first integer telling you how many to read
 *
 * Compute the average as a double and their max as an int.
 * Print all  out neatly to the screen and to an output fie named
 * 'answer-hw3'
 */

#include <stdio.h>
#define MAX_HW 100
#define OUT_FNAME "answer-hw3"

void print_data(int data[], int size)
{
	// Print data array
	
	for (int i=0; i<size; i++)
	{
		printf("%d\t", data[i]);
		if ((i+1)%10 == 0) printf("\n");
	}
	printf("\n");
}

void decode_data(FILE *ptr, int data[], int* size)
{
	// Get first number for data array length
	// Get data from the file 
	
	int idx = 0;
	rewind(ptr);
	fscanf(ptr, "%d", size);
	while (fscanf(ptr, "%d", &data[idx]) == 1) {
		idx++;
		if (*size == idx) break;
	}
}

double get_average(int data[], int len)
{
	// Get average value of the given data
	
	double sum = 0.;
	
	for (int i=0; i<len; i++)
		sum += data[i];

	return sum/len;
}

int get_max(int data[], int len)
{
	// Get max value of the given data
	
	int temp_max = 0;

	for (int i=0; i<len; i++)
		if (temp_max < data[i])
			temp_max = data[i];

	return temp_max;
}

int main(int argc, char* argv[])
{
	// There should be only one input file given
	if (argc != 2)
	{
		printf("Only one input file input is allowed\n");
		return 1;
	}

	// Declare and initialize identifiers
	FILE* ifp = fopen(argv[1], "r+");
	FILE* ofp = fopen(OUT_FNAME, "w+");
	int data[MAX_HW] = {0};
	int size = 0;
	double average = 0.;
	int max = 0;

	// Get data array and average, max of the array
	decode_data(ifp, data, &size);
	average = get_average(data, size);
	max = get_max(data, size);

	// Print on the screen
	printf("==================================\n");
	printf("\tAVERAGE : %-10.3lf\n", average);
	printf("\tMAX     : %-10d\n", max);
	printf("==================================\n");

	// Print on the output file
	fprintf(ofp, "==================================\n");
	fprintf(ofp, "\tAVERAGE : %-10.3lf\n", average);
	fprintf(ofp, "\tMAX     : %-10d\n", max);
	fprintf(ofp, "==================================\n");

	// Close the opened files
	fclose(ifp);
	fclose(ofp);

	return 0;
}
