//
// Rolls a die x number of times and prints the result
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int dieRoll, numberOfRolls;

	printf("How many times would you like to roll the die?: ");
	scanf("%d", &numberOfRolls);

	printf("Here are all of your rolls:\n");

	for(i = 0; i < numberOfRolls; i++)
	{
		dieRoll = rand()%7;
		if(dieRoll == 0)
			continue;
		else
		printf("%d\n", dieRoll);
	}
}