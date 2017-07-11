/*
 * Implement 3 different sorts:
 * 1. Selection sort
 * 2. Insertion sort
 * 3. Quicksort.
 *
 * Have each algorithm sort 500 numbers. If you can, time how long each algorithm
 * takes to sort. Which is the fastest?
 *
 * SCORE:
 *
 * It seems like the first 2 sorts didn't sort correctly. If you have time, please
 * take a look as to why that is happening.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void arraySet(int *max) ;
void swap(int *num1, int *num2) ;
void arrayRandom(int i, int array[], int max) ;
void arrayPrint(int i, int array[], int max) ;
void sort_Selection(int i, int array[], int max) ;
void sort_Insertion(int i, int array[], int max) ;
void sort_Quick(int i, int array[], int max) ;
void stored_array(int i, int array[], int max) ;

//main
int main()
{
	int i ;
	int num1 ;
	int num2 ;
	int max ;
	int *array ;

	array = (int*)malloc(sizeof(int)*max) ; // Segmentation fault because was not enough memory
						// set max amount array.
	arraySet(&max) ;
	
	//arrayRandom(i, array, max) ;
	
	stored_array(i, array, max) ;

	printf("Before sort\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;	

	sort_Selection(i, array, max) ;
// printf("sortselect\n") ;

	sort_Insertion(i, array, max) ;

	sort_Quick(i, array, max) ;
	
	free(array) ;	

	return 0 ;
	
}

// Set array max number function.
void arraySet(int *max)
{
	printf("Max Array?: ") ;
	scanf("%d", max) ;
}

//swap function.
void swap(int *num1, int *num2)
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}

// Generates random number and fill in array function.
void arrayRandom(int i, int array[], int max)
{
	int random ;

	srand(time(NULL)) ;

	for(i = 0; i < max; i++)
	{
		random = rand() % 99;
		array[i] = random ;
	}
}

// Print All the array function.
void arrayPrint(int i, int array[], int max)
{
	

	for(i = 0; i < max; i++)
	{
		printf("Array %d: %d\n", i+1,  array[i]) ;
	}

}

void stored_array(int i, int array[], int max)
{
	arrayRandom(i, array, max) ;

	printf("stored_array\n") ;
	arrayPrint(i, array, max) ;
	
}

// Selection sort function.
void sort_Selection(int i, int array[], int max)
{
	int j ;
	int low_num ; 

	stored_array(i, array, max) ;

	for(i = 0; i < max-1; i++)
	{
		low_num = i ;
		for(j = i+1; j < max; j++)
		{
			if(array[j] < array[low_num])
			{
				low_num = j ;
				swap(&array[low_num], &array[i]) ;
			}
	//	swap(&array[low_num], &array[i]) ;
		}
	}

//	printf("-------inside print\n") ;
//	for(i = 0; i < max; i++)
//	{
//		printf("Array %d: %d\n", i+1, array[i]) ;
//	}

	printf("Selection sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;
//	printf("printed\n") ;
}

// Insertion sort function.
void sort_Insertion(int i, int array[], int max)
{
	int j ;

	stored_array(i, array, max) ;
	
	for(i = 1; i < max; i++)
	{
		j = i-1 ;
		
		while(j >= 0 && array[j] > array[i])
		{
			array[j+1] = array[j] ;
			j = j-1 ;
		}
		
		array[j+1] = array[i] ;
	}
	printf("Insertion sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;

}

//Partition for Quick sort function.
int partition(int i, int array[], int max)
{
	int pivot = array[max] ;
	int j = i - 1 ;
	
	for(j; j <= max -1; j++)
	{
		if(array[j] <= pivot)
		{
			i++ ;
			swap(&array[i], &array[j]) ;
		}
	}
	swap(&array[i + 1], &array[max]) ;
	return (i +1) ;
}		

// Quick sort function.
void sort_Quick(int i, int array[], int max)
{

	stored_array(i, array, max) ;
	
	if(i < array[max])
	{
		int pi = partition(i, array, max) ;

		sort_Quick(i, array, pi-1) ;
		sort_Quick(pi+1, array, max) ;
	}
	printf("Quick sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;
}



