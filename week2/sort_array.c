/*
 * C assignment 4
 *
 * Learning Objectives: Passing arrays to functions, swapping 
 * values in an array, learning sort algorithms
 *
 * Create program that sorts an array.
 *
 * Array size can be whatever you want, as long as it has at least
 * 10 integers in it.
 *
 * Please pass the array to a function to be sorted and have the
 * function return the sorted array.
 *
 * You may use any sort method you want, as long as you write it
 * yourself and don't use a prebuilt sort function.
 *
 * SCORE: 20/21
 * -Beside seg fault, code looks good and functions how it should.
 */

#include <stdlib.h>
#include <stdio.h>

void arraySet(int *max) ;
void arrayFill(int i, int n, int max, int array[]) ;
void arrayPrint(int i, int max, int array[]) ;
void arraySort(int i, int n, int max, int array[]) ;
void arraySwap(int i, int n, int max, int array[], char yn) ;

// Main
int main()
{
	char yn ;
	int i = 0 ;
	int n = 0 ;
	int max = 0 ;
	int array[i] ;
	
	printf("===== Array Sort Program =====\n") ;	

	arraySet(&max) ;		// Set the Number of Arrays.
	
	arrayFill(i, n, max, array) ;	// Fill the Array Numbers.

	printf("\n") ;

	printf("> Before Array Sort,\n Change Array Value?(Y/N): ") ;
	scanf(" %c", &yn) ;

	if(yn == 'y' || yn == 'Y')
	{
		arraySwap(i, n, max, array, yn) ;

		printf("\n") ;
		printf("=========== Result ===========\n") ;
		arrayPrint(i, max, array) ;	// Print the Array Numbers.
		arraySort(i, n, max, array) ;	// Print Sorted Array Numbers.
	}
	else if (yn == 'n' || yn == 'N')
	{
		printf("\n") ;
		printf("=========== Result ===========\n") ;
		arrayPrint(i, max, array) ;	// Print the Array Numbers.
		arraySort(i, n, max, array) ;	// Print Sorted Array Numbers.
	}
	else	// Print if yn get different inputs.
	{
		printf("\n") ;
		printf("!Error:\n") ;
		printf(" Please Enter Y or N\n") ;
		printf("==============================\n") ;
	}

	return 0 ;

}

// Set max value of Array function.
void arraySet(int *max)
{
	printf("> How many arrays?: ") ;
	scanf("%d", max) ;	// Since max declear as pointer, Don't have to use '&'
}

// Input number in to array function.
void arrayFill(int i, int n, int max, int array[])
{
	for(i = 0; i < max; i++)
	{
		printf(" Input Array%d: ", i + 1) ;
		scanf("%d", &n) ;
		array[i] = n ;
	}

	printf("> Total Array Size: %d\n", max) ;

}

// Print the Array Numbers function.
void arrayPrint(int i, int max, int array[])
{
	printf("*Array Before Sorted\n") ;

	for(i = 0; i < max; i++)
	{
		printf("Array%d: %d\n", i + 1, array[i]) ;
	}

	printf("******************************\n") ;

}

// Sorting Array in low to high number order function.
void arraySort(int i, int n, int max, int array[])
{
	int j ;

	for(i = 0; i < max; i++)
	{
		for(j = i + 1; j < max; j++)
		{
			if(array[i] > array[j])
			{
				n = array[i] ;
				array[i] = array[j] ;
				array[j] = n ;
			}
		}
	}
	
	printf("*Array After Sorted\n") ;
	for(i = 0; i < max; i++)
	{	
		printf("Array%d: %d\n", i + 1, array[i]) ;
	}

	printf("******************************\n") ;

}

// Sawpping Array number function.
void arraySwap(int i, int n, int max, int array[], char yn)
{	
	int changeA ;

	while(yn == 'y' || yn == 'Y')
	{
	printf("> Enter The Array Number: ") ;
	scanf("%d", &changeA) ;

	if(changeA > max)	// If changeA gets bigger value than max, Break.
	{
		printf("\n") ;
		printf("!Error:\n") ;
		printf(" Array Size is Smaller than\n Entered Number!!\n") ;
		break ;
	}

	printf("*Array%d's Number: %d\n", changeA, array[changeA - 1]) ;
	printf("> Overwrite to?: ");
	scanf("%d", &n) ;
	
	printf("++++++++++++++++++++++++++++++\n") ;

	array[changeA - 1] = n ;

	printf("*Array%d's Number Swap to: %d\n", changeA, n) ;
	printf("\n") ;
	printf("> Swap more?(Y/N): ") ;
	scanf(" %c", &yn) ;
	}
	
}

