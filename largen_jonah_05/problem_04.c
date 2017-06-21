/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 05 Problem 04 */
/*************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void tossDie(int array[]);
int num;

int main(void) {
	int array[6];
	printf("Enter the number of dice to roll, up to six: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("\n");
	tossDie(array);
	return 0;
}

void tossDie(int array[]){
	srand(time(NULL));
	for (int i = 0; i < num && i < 6; i++){
		int random = rand() % 6 + 1;
		array[i] = random;
	}
	for (int i = 0; i < num && i < 6; i++){
			printf("%d ", array[i]);
	}
}

