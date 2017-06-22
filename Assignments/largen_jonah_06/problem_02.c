/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 06 Problem 01 */
/*************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findMin(char *array[], int size);
void findMin2(char *array[], int size);

int main(void) {
	char *array[] = {"Result", "dismal", "fees"};
	char *array2[] = {"result", "dismal", "fees"};
	int size = 3;
	findMin(array, size);
	printf("\n");
	findMin2(array2, size);
	return 0;
}

void findMin(char *array[], int size){
	//This function is done assuming upper-case letters are "smaller" than lower-case in ASCII
	char *temp[] = {array[0]};
	for (int i = 0; i < size; i++){
		if (strcmp(array[i], temp[0]) < 0){
			temp[0] = array[i];
		}
	}
	printf("%s", temp[0]);
}

void findMin2(char *array[], int size){
	//This function is done assuming solely the placement of the letter itself
	char *temp[] = {array[0]};
	for (int i = 0; i < size; i++){
		if (strcmp(array[i], temp[0]) < 0){
			temp[0] = array[i];
		}
	}
	printf("%s", temp[0]);
}
