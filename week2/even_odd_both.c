/*
 * C assignment 3
 *
 * Write a program that fills an array with 10 random integer.
 *
 * The program should print out the array. The program should also
 * determine whether every integer in the array is even, odd, or 
 * both and prints this status.
 *
 * Score: 10.3/11
 *
 * Code is functional and coding style is acceptable. You should 
 * to keep your comments short, or break to a new line when comments
 * are long.
 *
 * I also noticed you functions' return types are int, but there's
 * no reason to return an int.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void randomGenerator(int i, int array[], int max) ;
int check(int i, int array[]) ;
int finalcheck(int i, int array[]) ;

// Main
int main()
{
	int i ;
	int max = 10 ;		// set Max value of Random Number.
	int array[10] ;		// Array Number.

	for(i = 0; i < 10; i++)
	{
		randomGenerator(i, array, max) ;	// Running Random Generator.
		
		printf("-Random Number %d\n", i + 1) ;
		printf(" Output: %d ---> ", array[i]) ;
		check(i, array) ;	// Fix: Before ->[ printf("%d\n", check()) ; ] Found out that: inside check function, it had printf itself. Which caused printing unwanted/unexpected line. 
	}
	
	printf("\n") ;
	printf("*Final Check: Arrays have ") ;
	finalcheck(i, array) ;
		
	return 0 ;
}

// Generate Random number function for each array.
void randomGenerator(int i, int array[], int max)
{
	int random ;
	
	// 'rand()' calls random number for each array. However, it prints same set of random value whenever program runs. Therefore, I added 'srand(time(NULL)) ;' to give change.
	srand(time(NULL)) ; // As time changes, Calling number changes.

	// Repeat 10 times to get random number.	
	for(i = 0; i < 10; i++)
	{
		random = rand() % max ; // Call random number between 0 to max number.
		array[i] = random ;
	}
}

// Function that Check Single Even or Odd number.
int check(int i, int array[])
{
	if(array[i] % 2 == 0)
	{
		printf("Even Number.\n") ;
	}
	if(array[i] % 2 == 1)
	{
		printf("Odd Number.\n") ;
	}

	return i ;
}

// Function that Check if All array numbers are Even or Odd or Both.
int finalcheck(int i, int array[])
{
	int even = 0 ;
	
	// Check each array and if number is even, +1 to even counter.
	for(i = 0; i < 10; i++)
	{
		if(array[i] % 2 == 0)
		{
			even++ ;
		}		
	}

	if(even == 10)
	{
		printf("Even Numbers Only.\n") ;
	}
	if(even == 0)
	{
		printf("Odd Numbers Only.\n") ;
	}
	else
	{
		printf("Both Even and Odd Numbers.\n") ;
	}

	return even ;
}

