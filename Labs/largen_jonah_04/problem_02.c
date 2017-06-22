/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 04 Problem 02 */
/*************************/

#include <stdio.h>

int main(void){
	int user = 0, count = 1, factorial = 1;
	printf("Enter an integer number n:\n");
	fflush(stdout);
	scanf("%d", &user);
	while (count <= user){
		factorial *= count;
		count++;
	}
	printf("The factorial is %d.\n", factorial);
	return 0;
}
