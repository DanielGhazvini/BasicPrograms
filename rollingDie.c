//
// Rolls a die a user-given number of times and prints the result
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	int dieRoll, numberOfRolls;

	// Ensures that every run will give a different set of numbers
	srand(time(NULL));

	printf("How many times would you like to roll the die?: ");
	scanf("%d", &numberOfRolls);

	printf("Here are all of your rolls:\n");

	for(i = 0; i < numberOfRolls; i++)
	{
		dieRoll = rand()% 6 + 1;

		printf("%d\n", dieRoll);
	}
}