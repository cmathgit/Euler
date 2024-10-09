/*********************************************************************
        Project Euler - Archived Problems and Solutions
		Programmer: Cruz G. Macias
		Problem No.: 2
        Purpose: Each new term in the Fibonacci sequence is generated 
		by adding the previous two terms. By starting with 1 and 2, 
		the first 10 terms will be:
		
			1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

		By considering the terms in the Fibonacci sequence whose values 
		do not exceed four million, find the sum of the even-valued terms.
*********************************************************************/
//define globals
int num_param, element0, element1, element2, element3, element4, element5;


//this is limited by the size of the buffer being used


// #include <iostream>
// #include <cmath>
#include <math.h>
// #include <cstdio>
#include <stdio.h>
// #include <cstring>
#include <string.h>
// #include <cstdlib>
#include <stdlib.h>
#include <vector>
// using namespace std;

//prototypes
int fibSumEven(int, int, int, int, int);
 

int main(int argc, char *argv[])
{
	//printf("Color %s, Number %d, Float %4.2f", "red", 123456, 3.14);
	
	//declarations
	int initial_term_1, initial_term_2, initial_sum, initial_nth_term, upper_bound, summation_result;
	
	//definitions
	num_param = 6;
	element0 = 0;
	element1 = 1;
	element2 = 2;
	element3 = 3;
	element4 = 4;
	element5 = 5;
	
	
	//be careful - avoid segmentation fault 
	if(argc != num_param)
	{
		fprintf(stderr, "Usage: %s <initial_term_1> <initial_term_2> <initial_sum> <initial_nth_term> <upper_bound>\n", argv[element0]);
		exit(EXIT_FAILURE);
	}
	
	//if segmentation merit, use given parameters
	initial_term_1 = atoi(argv[element1]);
	initial_term_2  = atoi(argv[element2]);
	initial_sum  = atoi(argv[element3]);
	initial_nth_term  = atoi(argv[element4]);
	upper_bound = atoi(argv[element5]);
	
	summation_result = fibSumEven( initial_term_1, initial_term_2, initial_sum, initial_nth_term, upper_bound);
	
	printf("\nSummation result = %d", summation_result);
	printf("\n");
	exit(0);
}


/*
	Routine: int fibSumEven(int fn, int fnplus, int sum, int n, int upper)
	Parameters: integer, integer, integer, integer, integer
	Return value: int
	Purpose: Utilize recursion to compute the sum of all even terms in the Fibonacci Sequence and return the result of this sum
*/
int fibSumEven(int fn, int fnPlus, int sum, int n, int upper)
{
	int temp;
	temp = fn;
	fn = fnPlus;
	fnPlus += temp;
	n++;
	
	//uncomment the following code block for term by term debugging or detail
	printf("\nf[%d", n);
	printf("] = %d", fn);
	printf(", f[%d", (n + 1));
	printf("] = %d", fnPlus);
	printf("\n");
	
	//add this term to the linear combination if the term is even
	if((fnPlus % 2) == 0)
	{	
		//uncomment the following code block for detail
		printf("\n f[%d", (n +1));
		printf("] = %d", fnPlus);
		printf(" is even.\n");
		
		//add another term in the sequence
		sum += fnPlus;
	}

	//return the result if upper bound has been reached or continue the cascade
	if( n == (upper - 1))
		return sum;
	else
		return fibSumEven(fn, fnPlus, sum, n, upper);
}