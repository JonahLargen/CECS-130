/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 04 Problem 01 */
/*************************/

#include <stdio.h>

int main(void){
	int user = 0, factorial = 1;
	printf("Enter an integer number n:\n");
	fflush(stdout);
	scanf("%d", &user);
	for(int count = 1; count <= user; count++){
		factorial *= count;
	}
	printf("The factorial is %d.\n", factorial);
	return 0;
}
