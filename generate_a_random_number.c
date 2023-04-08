#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int input, number;
    srand(time(NULL)); // initialize random seed.
    number = rand() % 10 + 1; //here we set the length of input number
    do
    {
        printf ("\nGuess the number (1 to 10): ");
		scanf ("%d",&input);
		if (number > input)
		printf ("The number is higher\n");
    } while (number != input);
    printf("This is correct");
    return 0;
}