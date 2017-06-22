/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 05 Problem 03 */
/*************************/

#include <stdio.h>

int main(void) {
	int *iPtr, iNumber = 1;
	char *cPtr, cCharacter = 'c';
	float *fFloat, fNumber = 3.14;
	iPtr = &iNumber;
	cPtr = &cCharacter;
	fFloat = &fNumber;
	printf("Value of each non-pointer: %d %c %.2f\n", iNumber, cCharacter, fNumber);
	printf("Value of each pointer: %d %c %.2f\n", *iPtr, *cPtr, *fFloat);
	printf("Address of each non-pointer: %d %d %d\n", &iNumber, &cCharacter, &fNumber);
	printf("Address of each pointer: %d %d %d", iPtr, cPtr, fFloat);
	return 0;
}

