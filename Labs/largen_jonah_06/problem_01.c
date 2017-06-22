/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 06 Problem 01 */
/*************************/

#include <stdio.h>

int findMin(int array[], int size);

int main(void){
	int array[7] = {1,-11,33,-17,0,6,8}, size = 7;
	for (int i = 0; i < size; i++){
		printf("The value of array[%d] is %d.\n", i, array[i]);
	}
	printf("\nThe smallest element is %d.", findMin(array, size));
	return 0;
}

int findMin(int array[], int size){
	int minInt = array[0];
	for (int i = 1; i < size; i++){
		if (array[i] < minInt){
			minInt = array[i];
		}
	}
	return minInt;
}
