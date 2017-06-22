/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 07 Problem 01 */
/*************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
	float salary;
	char id[9];
};

int main(void) {
	int EmployeesCount = 3;
	struct Employee *myEmployees = (struct Employee *) malloc(EmployeesCount*sizeof(struct Employee));
	if (myEmployees != NULL){
		strcpy(myEmployees[0].id, "John01");
		myEmployees[0].salary = 1000;
		strcpy(myEmployees[1].id, "John11");
		myEmployees[1].salary = 1100;
		strcpy(myEmployees[2].id, "John22");
		myEmployees[2].salary = 2200;
		for (int i = 0; i < EmployeesCount; i++){
			myEmployees[i].salary = myEmployees[i].salary * 1.1;
			printf("Employee ID: %s\n", myEmployees[i].id);
			printf("Employee Salary: $%.2f\n", myEmployees[i].salary);
		}
		free(myEmployees);
	}else{
		printf("Error creating array.");
	}
	return 0;
}
