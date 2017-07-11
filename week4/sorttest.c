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
	
	printf("\n") ;
	printf("== Sort Program ==\n") ;
	
	arraySet(&max) ;			// Set Max number of array.
	printf("\n") ;	

	sort_Selection(i, array, max) ;		// Selection Sort function.

	sort_Insertion(i, array, max) ;		// Insertion Sort function.

	sort_Quick(i, array, max) ;		// Quick Sort function.
	
	free(array) ;

	return 0 ;
	
}

// Set array max number function.
void arraySet(int *max)
{
	//*max = 10;
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
		random = rand() % 500;
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

// Get Radom Generated array and store to feed same array for different sort type.
void stored_array(int i, int array[], int max)
{
	arrayRandom(i, array, max) ;

	printf("*Array Before Sorted\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;
		
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
			}
		}	
		
		swap(&array[low_num], &array[i]) ;
		
	}

	printf(">Selection sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;

}

// Insertion sort function.
void sort_Insertion(int i, int array[], int max)
{
	int j ;
	int key ;

	stored_array(i, array, max) ;
	
	for(i = 1; i < max; i++)
	{
		key = array[i] ;
		j = i-1 ;
		
		while(j >= 0 && array[j] > key)
		{
			array[j+1] = array[j] ;
			j = j-1 ;
		}
		
		array[j+1] = key ;
	}
	printf(">Insertion sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;

}

//Partition for Quick sort function.
int partition(int i, int array[], int max)
{
	int j ;
	int pivot = array[max] ;
	int k = i - 1 ;
	
	for(j = k; j <= max-1; j++)
	{
		if(array[j] <= pivot)
		{
			k++ ;
			swap(&array[k], &array[j]) ;
		}
	}
	swap(&array[k + 1], &array[max]) ;
	return (k+1) ;
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
	printf(">Quick sort print\n") ;
	arrayPrint(i, array, max) ;
	printf("\n") ;
}



