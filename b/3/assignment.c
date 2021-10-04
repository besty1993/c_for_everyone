/* C For Everyone: Structured Programming
 * Week 3 Assignment
 *
 * Generate list with 100 integers and sort the list
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LENGTH 100			// Length of the list(The number of the integers to generate)
#define INT_RANGE 10000			// The range of the integer value to generate
#define RAND_VAL (rand()%INT_RANGE)	// Randomly generated integer value

typedef struct list {int data; struct list *next;} list;

int is_empty(const list *l) {return (l == NULL);}

list* create_list(int d)
{
	// Create a first node of list with given integer data
	
	list* head = malloc(sizeof(list));
	head->data = d;
	head->next = NULL;
	return head;
}

void print_list(list *h)
{
	// Print the give list
	
	int i = 0;

	while (h != NULL) {
		printf ("%5d:", h->data);
		h = h->next;

		i++;
		if (i%20 == 0)
			printf("\n");
	}

	printf("\n");
}

void swap_node(list *n1, list *n2)
{
	// Swap the two given list nodes
	
	int temp = n1->data;
	n1->data = n2->data;
	n2->data = temp;
}

int main(void)
{
	/* Generate linear lined list with 100 integers */
	printf("\n=============== Generate list with 100 integers ================\n");

	// Create the first node
	list* int_list = create_list(RAND_VAL);	// integer list
	list* last_node = int_list;		// The latest node
	list* temp_node;			// Temporary node

	// Create nodes with random value and connect as list
	for (int i=1; i<LENGTH; i++)
	{
		temp_node = create_list(RAND_VAL);
		last_node->next = temp_node;
		last_node = temp_node;
	}

	print_list(int_list);

	/* Sort list with bubble sort method */
	printf("\n=============== Sort the integer list with bubble sort ================\n");
	list* temp_n1 = int_list;	// Temporary node for sorting
	list* temp_n2 = temp_n1;	// Temporary node for sorting

	for (int i=0; i<LENGTH; i++)
	{
		for (int j=i+1; j<LENGTH; j++)
		{
			temp_n2 = temp_n2->next;

			// Compare node data and swap
			if (temp_n2->data < temp_n1->data)
				swap_node(temp_n1, temp_n2);
		}

		temp_n1 = temp_n1->next;
		temp_n2 = temp_n1;
	}

	print_list(int_list);
}
