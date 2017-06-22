/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 09 Problem 01 */
/*************************/

#include <stdio.h>
#include <stdlib.h>

void loadMyIncome(char *fileName);
char myLine[81];

int main(void){
	loadMyIncome("myIncome.txt");
	return 0;
}

void loadMyIncome(char *fileName){
	FILE *fp;
	fp = fopen(fileName, "r");
	if (fp != NULL){
		printf("Successfully opened file %s\n", fileName);
		while (!feof(fp)){
			fscanf(fp, "%s", myLine);
			printf("%s\n", myLine);
		}
		fclose(fp);
	}else{
		printf("Failed to open file %s\n", fileName);
	}
}
