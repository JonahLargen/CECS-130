/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 03 Problem 03 */
/*************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int total = dice1 + dice2;
	if (total == 7 || total == 11){
		printf("You win! The sum was %d.\n", total);
	} else{
		printf("Sorry, you lose! The sum was %d.\n", total);
	}
	return 0;
}
