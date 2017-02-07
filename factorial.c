//
// Finds the factorial of a given number
//

#include <stdio.h>

int factorialFinder(int x)
{
	if(x==1)
		return(1);
	else
		return x*factorialFinder(x-1);
}

int main()
{
	int input, factorial;
	printf("Enter a number: ");
	scanf("%d", &input);

	factorial = factorialFinder(input);

	printf("The factorial of %d is %d\n", input, factorial);
}