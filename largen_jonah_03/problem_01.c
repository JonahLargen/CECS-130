/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 03 Problem 01 */
/*************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {
	srand(time(NULL)); // Creates a seed for the random function

	int user_int = 0; // The number (int) the user will guess
	char user_char = '0'; // The number (char) the user will guess
	int random = rand() % 10 + 1; // Creates a random number from 1 to 10

	printf("Guess a number between 1 and 10:\n");
	fflush(stdout);
	scanf("%d", &user_int); // Sets the number that the user guessed
	user_char = (user_int - 1) + '0'; // Turns the integer into a character and changes the range to 0-9 for isdigit().


	if (isdigit(user_char) && user_int >= 1 && user_int <= 10) { // Checks if the modified number is a digit and if it is between 1 and 10.
		if (user_int == random) {
			printf("Correct!\n");
		} else {
			printf("Sorry! The correct number was %d.\n", random);
		}
	} else {
		printf("You did not guess a number between 1 and 10.\n");
	}
	return 0;
}
