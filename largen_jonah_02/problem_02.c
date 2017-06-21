/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 02 Problem 02 */
/*************************/

#include <stdio.h>

int main(void){
	int a = 0, b = 0, x = 0, y = 0;
	printf("Enter integer for \'a\'.\n");
	fflush(stdout);
	scanf("%d", &a);
	printf("Enter integer for \'b\'.\n");
	fflush(stdout);
	scanf("%d", &b);
	printf("Enter integer for \'x\'.\n");
	fflush(stdout);
	scanf("%d", &x);
	printf("Enter integer for \'y\'.\n");
	fflush(stdout);
	scanf("%d", &y);
	printf("The output is %d.", (a-b)*(x-y));
	return 0;
}
