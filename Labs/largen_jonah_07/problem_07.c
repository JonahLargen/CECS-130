/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 07 Problem 01 */
/*************************/

#include <stdio.h>

struct City{
	char name[20];
	int population;
	double surfaceArea;
};

void density(struct City array[]);

int main(void){
	struct City cities[3] = {{"Paradis", 200000, 75000.00}, {"Springfield", 230000, 82000.00}, {"Main", 134000, 42000.00}};
	for (int i = 0; i < 3; i++){
		printf("%-14s %d   %.2f\n", cities[i].name, cities[i].population, cities[i].surfaceArea);
	}
	printf("\n");
	density(cities);
	return 0;
}

void density(struct City array[]){
	for (int i = 0; i < 3; i++){
		double density = array[i].population / array[i].surfaceArea;
		printf("%-15s%.2f\tpersons per square mile\n", array[i].name, density);
	}
}
