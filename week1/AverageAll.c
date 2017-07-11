/* 
 * Write a program that reads in an arbitrary amount
 * of numbers and prints the average of them all.
 */

#include<stdio.h>
#include<math.h>

int main()
{
	int n ;
	int i = 0 ;
	int sum = 0 ; //Fix: did not give value and printed strange output number.
	float average ;

	printf("|------------------------------------|\n") ;
	printf("|    Average of arbitrary Program    |\n") ;
	printf("|Input as much as you want.          |\n") ;
	printf("|Input negative number to see result.|\n") ;			
	printf("|------------------------------------|\n") ;	
	
	// Get input number till enter any negative number.
	while(n >= 0 )
	{
		printf(" Input number %d: ", i+1) ;
		scanf("%d", &n) ;
		i = i + 1 ;
		sum = sum + n ;
		
		// Remove negative input from calculation.
		if(n < 0)
		{
			sum = sum - n ;
			i = i - 1 ;
		}
	}
	

	printf("\n");
	printf("- Result -\n") ;
	
	// Give Error Message when negative number entered very beginning. 
	if( sum < 0)
	{
		printf("ERROR: No values to find sum and average.\n") ;
	}
	else
	{
	average = sum / i ;

	printf("Sum of the %d numbers: %d\n", i, sum) ;
	printf("Average of the %d numbers: %.2f\n", i, average) ;
	}

	return 0 ;
}
