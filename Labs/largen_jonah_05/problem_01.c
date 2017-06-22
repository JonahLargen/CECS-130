/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 05 Problem 01 */
/*************************/

#include <stdio.h>

void adder();
void subtracter();

int total;

int main(void){
	total = 0;
	adder();
	subtracter();
	adder();
	subtracter();
	adder();
	subtracter();
	adder();
	subtracter();
	printf("The total is %d.", total);
	return 0;
}

void adder(){
	printf("Please enter a number to add to the total:\n");
	fflush(stdout);
	int x = 0;
	scanf("%d", &x);
	total+=x;
}
void subtracter(){
	printf("Please enter a number to subtract to the total:\n");
	fflush(stdout);
	int y = 0;
	scanf("%d", &y);
	total-=y;
}
