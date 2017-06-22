/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 02 Problem 01 */
/*************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	double numberOfMiles, numberOfYards;
	printf("Enter number of miles: ");
	fflush(stdout);
	scanf("%lf", &numberOfMiles);
	numberOfYards = numberOfMiles * 1760;
	printf("The number of yards is %d. (truncated to nearest integer)", (int)numberOfYards);
	return 0;
}
