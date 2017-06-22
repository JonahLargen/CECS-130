/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 04 Problem 04 */
/*************************/

#include <stdio.h>
int getRemainder(int num, int den);
double getBiggest(double a, double b);
void printATM();

int main(void) {
	printf("The remainder of 19/4 is %d.\n", getRemainder(19,4));
	printf("\nThe biggest number between 4.3 and 5.67 is %.2f.", getBiggest(4.3, 5.67));
	printATM();
	return 0;
}

int getRemainder(int num, int den){
	return num%den;
}

double getBiggest(double a, double b){
	if (a >= b) return a;
	else return b;
}

void printATM(){
	printf("\n\n-----ATM-----\n\nTransfer\n");
	printf("Deposit Money\n");
	printf("PIN Change\n");
	printf("Balance Inquiry\n");
	printf("Withdraw Money\n");
	printf("Ball Pay\n\n-----ATM-----\n");
}
