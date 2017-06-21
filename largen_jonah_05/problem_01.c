/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 05 Problem 01 */
/*************************/

#include <stdio.h>
void sortAscending();
int array[10];

int main(void) {
	//Create the array
	for (int i = 0; i <= 9; i++){
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%d", &array[i]);
	}

	//Ask the user what direction to sort
	printf("\nType [1] to print in ascending order or [2] to print in descending order: ");
	fflush(stdout);
	int input = 0;
	scanf("%d", &input);

	//Bubble sort the array in ascending order
	sortAscending();

	//Print the array
	if (input == 1){
		printf("\nAscending order: ");
		for (int i = 0; i <= 9; i++){
			printf("%d ", array[i]);
		}
	} else{
		printf("\nDescending order: ");
		for (int i = 9; i >= 0; i--){
			printf("%d ", array[i]);
		}
	}

	return 0;
}

void sortAscending(){
	int temp, size = 10;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < (size - i - 1); j++){
			if (array[j] > array[j + 1]){
				temp = array[j];
	            array[j] = array[j + 1];
	            array[j + 1] = temp;
			}
		}
	}
}
