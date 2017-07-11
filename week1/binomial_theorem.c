/*
 * Write a program that prints the expansion of a
 * binomial expression `(a + b)^n = ??`. Have the
 * program read in 3 arguments: a, b, and n. Please
 * write a function inside of main() that takes the
 * 3 arguments and prints the binomial expansion.
 *
 * Score 9000/10000
 *
 * I like that you made 2 separate functions.
 */

// Program here

#include<stdio.h>
#include<math.h>

int calculation(int a, int b, int n) ;
int expansion(int a, int b, int n) ;

// Main
int main()
{
	int a ;
	int b ;
	int n ;
	
	printf(" Input value a: ") ;
	scanf("%d", &a) ;

	printf(" Input value b: ") ;
	scanf("%d", &b) ;

	printf(" Input power of n: ") ;
	scanf("%d", &n) ;

	calculation(a, b, n) ;	

	printf("\n") ;
	printf(" - Result -\n") ;

	printf("Binomial expression of (%d+%d)^%d is: ", a, b, n) ;
	printf("%d\n", calculation(a,b,n)) ;

	printf("Expansion of Binomial expression: ") ;
	
	expansion(a, b, n) ;
        printf("\n") ;
	
	return 0 ;
}

// Binomial Theorem Calculation Function.
int calculation(int a, int b, int n)
{
	int i ;
	int add ;
	int result = 1 ;

	add = a + b ;

	for(i = 1; i <= n; i++)
	{
		result = result * add ;
	}
	return result ;
}

// Expending Binomial Theorem Form Function.
int expansion(int a, int b, int n)
{
	int i ;

	for(i = 1; i <=n; i++)
	{
		printf("(%d+%d) ",a ,b) ;
	}
}




