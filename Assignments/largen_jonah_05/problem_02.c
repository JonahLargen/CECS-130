/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 05 Problem 02 */
/*************************/

#include <stdio.h>
float array[30];

int main(void) {
	int go = 1, count = 0;
	float temp, total;
	while (go == 1 && count < 30){
		printf("Enter a GPA or type [-1] to quit: ");
		fflush(stdout);
		scanf("%f", &temp);
		if (temp == -1){
			go = 0;
		} else{
			array[count] = temp;
			count++;
		}
	}
	for (int i = 0; i < count; i++){
		total+=array[i];
	}
	total/=count;
	printf("GPA Average: %.2f", total);
	return 0;
}

