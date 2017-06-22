/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 07 Problem 03 */
/*************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char *fileName = "myBooksList.txt";
	fp = fopen(fileName, "w");
	if (fp != NULL){
		printf("Successfully created file %s.\n", fileName);
		fprintf(fp, "The Greatest Lie on Earth: Proof That Our World Is Not a Moving Globe - Edward Hendrie\n");
		fprintf(fp, "Zetetic Astronomy: Earth Not a Globe (Forgotten Books) - Samuel Rowbotham");
		fclose(fp);
	}else{
		printf("Error opening file %s.\n", fileName);
	}
	return 0;
}
