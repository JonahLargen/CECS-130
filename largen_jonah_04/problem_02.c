/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 04 Problem 02 */
/*************************/

#include <stdio.h>

int main(void) {
	int begin, end, inc = 0;
	printf("Enter the number to start counting from:\n");
	fflush(stdout);
	scanf("%d", &begin);
	printf("Enter the number to stop counting at:\n");
	fflush(stdout);
	scanf("%d", &end);
	printf("Enter the increment number:\n");
	fflush(stdout);
	scanf("%d", &inc);
	if (begin < end){
		while (begin <= end){
			printf("%d\n", begin);
			begin+=inc;
		}
	} else if (end < begin){
		while (end <= begin){
			printf("%d\n", begin);
			begin-=inc;
		}
	} else{
		printf("The beginning and ending number cannot be the same!");
	}
	return 0;
}
