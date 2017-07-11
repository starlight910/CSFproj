/*
 * Fizzbuzz in C++
 *
 * Write a program that prints the numbers 0 through 100.
 *
 * When the number is divisible by 3, print "Fizz" after the number, and
 * continue print the rest of the series.
 *
 * When the number is divisible by 5, print "Buzz" after the number, and
 * continue to print the rest of the series.
 *
 * If the number is both divisible by 3 and 5, "FizzBuzz" should be printed
 * instead.
 */

#include <iostream>

int main() 
{
	int i ;
	int max ;
	
	std::cout << "" << std::endl ;
	std::cout << " - FizzBuzzFizzBuzz - " << std::endl ;
	std::cout << "" << std::endl ;

	std::cout << "How many number for FizzBuzz? " ;
	std::cin >> max ;
	std::cout << "" << std::endl ;

	for(i = 0; i <= max; i++)
	{
		std::cout << i ;

		if(i % 3 == 0 && i % 5 != 0 && i != 0)
		{
			std::cout << " Fizz!" ;
		}
		
		if(i % 5 == 0 && i % 3 != 0 && i != 0)
		{
			std::cout << " Buzz!" ;
		}

		if(i % 5 == 0 && i % 3 == 0 && i != 0)
		{
			std::cout << " FizzBuzz!" ;
		}

		std::cout << "" << std::endl ;
	}

	std::cout << "" << std::endl ;
  // Printing in c++
	std::cout << "Done! FizzBuzz 4Ever!" << std::endl ;

  return 0 ;
}
