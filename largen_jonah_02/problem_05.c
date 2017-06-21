/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 02 Problem 03 */
/*************************/

#include <stdio.h>

int main(void){
	float rate = 0, salesPrice = 0, cost = 0;
	printf("Enter the \'rate\'.\n");
	fflush(stdout);
	scanf("%f", &rate);
	printf("Enter the \'sales price\'.\n");
	fflush(stdout);
	scanf("%f", &salesPrice);
	printf("Enter the \'cost\'.\n");
	fflush(stdout);
	scanf("%f", &cost);
	printf("The commission is $%.2f.", rate * (salesPrice - cost));
	return 0;
}
