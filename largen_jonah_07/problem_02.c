/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 07 Problem 02 */
/*************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void loadMySongsList(char *fileName);
char songBuff[132];

int main(void) {
	loadMySongsList("mysongslist.txt");
	return 0;
}

void loadMySongsList(char *fileName){
	FILE *fp;
	int c = 1;
	fp = fopen(fileName, "r");
	if (fp != NULL){
		printf("Successfully opened file %s.\n\n", fileName);
		while(!feof(fp)){
			fgets(songBuff, 132, fp);
			printf("Song %d: %s", c, songBuff);
			c++;
		}
		fclose(fp);
	}else{
		printf("Error opening file %s.\n", fileName);
	}
}
