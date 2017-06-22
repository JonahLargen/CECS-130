/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 03 Problem 01 */
/*************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x = 0, y = 0, i = 0;
	printf("Enter a non-zero x and y integer for the coordinate seperated by a comma:");
	fflush(stdout);
	scanf("%d,%d", &x, &y);
	if (x > 0){
		if (y > 0) i = 1;
		else i = 4;
	}else{
		if (y > 0) i = 2;
		else i = 3;
	}
	printf("The point (%d,%d) is in quadrant %d.\n", x, y, i);
	return 0;
}
