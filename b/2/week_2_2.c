#include <stdio.h>
#include <stdlib.h>

#define NUM_DEPART 5
#define MIN_SALARY_HR 1000
#define MIN_SALARY_SALES 1100
#define MIN_SALARY_RESEARCH 1200
#define MIN_SALARY_SOFTWARE 1300
#define MIN_SALARY_EXECUTIVE 1400
#define SALARY_RANGE 100
#define RANDOM_SALARY(min) ((rand()%SALARY_RANGE)+min)

const char* DEPARTMENT_NAMES[] = {
	"HR      ", "Sales   ", "Research ", "Software ", "Executive"};
const int MIN_DEPARTMENT_SALARY[] = {1000,1100,1200,1300,1400};

typedef enum department {HR, Sales, Research, Software, Executive} department;

typedef struct {
	department depart;
	unsigned int salary;
	unsigned int social_sec;
} employee;

void gen_depart(employee *emp)
{
	emp->depart = rand() % NUM_DEPART;
}

void gen_salary(employee *emp)
{
	int min_salary = MIN_DEPARTMENT_SALARY[emp->depart];
	emp->salary = RANDOM_SALARY(min_salary);
}

void gen_social_sec(employee *emp)
{
	static int temp_social_sec = 0;
	emp->social_sec = temp_social_sec++;
}

int main(void)
{
	printf("Index\tDept.\t\tSalary\tSec. #\n");

	employee emp_list[10];
	for (int i=0; i<10; i++)
	{
		gen_depart(&emp_list[i]);
		gen_salary(&emp_list[i]);
		gen_social_sec(&emp_list[i]);

		printf("%d\t%s\t%d\t%d\n",
				i,
				DEPARTMENT_NAMES[emp_list[i].depart],
				emp_list[i].salary,
				emp_list[i].social_sec
		      );
	}
}
