/*
 * This program does not work as-is. Please make it work without modifying any
 * existing code. The main takeaway from this assignment is learning how to
 * use pointers. 
 *
 * You will know it is correct if you run the program and you get the success
 * message.
 *
 * SCORE:
 */

#include <stdio.h>
#include <stdlib.h>

void check_pointers(int *ip, double *dp, float *fp, char *cp, int *ap);

int main()
{

	int *ip;
	double *dp;
  	float *fp;
  	char *cp;
  	int *ap;

  	int ivar = 2;
  	double dvar = 3.14;
  	float fvar = 1.0;
  	char cvar = 'f';
  	int *arr;

	int sum = 0 ;

	ip = &ivar ;
	dp = &dvar ;
	fp = &fvar ;
	cp = &cvar ;

	arr = (int*)malloc(sizeof(int)*10) ;
	
	ap = arr ;


	for(int i = 1; i <= 6; i++)
	{
		sum = sum + i ;
		arr[i-1] = sum ;	
	}

  	check_pointers(ip, dp, fp, cp, ap);

  	free(arr);

  	return 0;
}

void check_pointers(int *ip, double *dp, float *fp, char *cp, int *ap) 
{
  	int switcher = 1;
  	int arr_checker[6] = {1,3,6,10,15,21};

  	if(*ip != 2) 
	{
    		switcher = 0;
  	}
  	if(*dp != 3.14) 
	{
    		switcher = 0;
  	}
  	if(*fp != 1.0) 
	{
    		switcher =  0;
 	}
  	if(*cp != 'f') 
	{
    		switcher = 0;
  	}
  	for(int i = 0; i < 6; i++) 
	{
    		if(ap[i] != arr_checker[i]) 
		{
      			switcher = 0;
    		}
  	}

  	if(switcher == 1) 
	{
    		printf("You did it!");
  	} 
	else 
	{
    		printf("Hnnnnnnggggg... try again");
  	}

  	return;
} 

