/*********************************************************************
        Project Euclid - Euclidean Algorithm
		Programmer: Cruz G. Macias
        Purpose: Find the greatest common divisor between given any
		two integers
*********************************************************************/
//define globals

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

// using namespace std;

//prototypes
int gcd_alg(int, int);


int main(int argc, char *argv[])
{
	//printf("Color %s, Number %d, Float %4.2f", "red", 123456, 3.14);
	
	//declarations
	int num_param, test_num_1, test_num_2, test_num_3, gcd_result, element0, element1, element2;
	
	//definitions
	num_param = 3;
	element0 = 0;
	element1 = 1;
	element2 = 2;
	
	
	//be careful - avoid segmentation fault 
	if(argc != num_param)
	{
		fprintf(stderr, "Usage: %s <test_num_1> <test_num_2>\n", argv[element0]);
		exit(EXIT_FAILURE);
	}
	
	//if segmentation merit, use given parameters
	test_num_1 = atoi(argv[element1]);
	test_num_2  = atoi(argv[element2]);
	
	if(test_num_1 < 0 || test_num_2 < 0)
	{
		printf("\nInput values must be positive integers\n");
		exit(1);
	}
	else if(test_num_1 < test_num_2)
	{
		printf("Value a = ");
		printf("%d", test_num_1);
		printf(" is less than ");
		printf("value b = ");
		printf("%d", test_num_2);
		printf(". Please enter values such that a > b or a = b.\n");
		exit(1);
	}
	else if(test_num_1 == 0)
	{
		printf("\nDivision by zero is undefined.\n");
		exit(1);
	}
	
	//execute the Euclidean Algorithm
	//printf("%d", test_num_1);
	//printf("%d", test_num_2);
	gcd_result = gcd_alg(test_num_1, test_num_2);
	//printf("gcd result%d", gcd_result);
	//test_num_3 = (test_num_1 % test_num_2);
	//printf("test_num%d", test_num_3);
	if(gcd_result == 1 && test_num_1 != 1)
	{
		printf("\n%d", test_num_1);
		printf(" and ");
		//printf("\n%d and %s%d", test_num_1, test_num_2);
		printf("%d", test_num_2);
		printf(" are relatively prime. \n");	
	}
	else if(gcd_result > 1 && test_num_2 != 0)
	{
		printf("\n%d", gcd_result);
		//printf("\n%d is the greatest common divisor between %s%d", gcd_result, test_num_1);
		printf(" is the greatest common divisor for ");
		printf("%d", test_num_1);
		//printf(" and %s%d.\n", test_num_2);
		printf(" and ");
		printf("%d", test_num_2);
		printf(". \n");
	}
	else if(gcd_result == test_num_1 && test_num_2 == 0)
	{
		printf("\nEvery integer divides 0, and ");
		printf("%d", gcd_result);
		printf(" is the greatest common divisor for ");
		printf("%d", test_num_1);
		printf(" and ");
		printf("%d", test_num_2);
		printf(". \n");
	}
	/*
	else
	{
		printf("\n1 is a divisor of every integer by definition of divisor.\n");
	}
	*/
	exit(0);
}


/*
	Routine: gcd_alg( a, b)
	Parameters: integer, integer
	Return value: returns the result of finding the greatest common divisor of inputs a and b
	Purpose: Use the Recursive Euclidean Algorithm to determine the greatest common divisor between and b
*/
int gcd_alg(int a, int b)
{
	int gcd;
	
	//printf("a%d", a);
	//printf("b%d", b);
	if(b == 0)
	{
		return a;
	}
	else if(a >= b && b > 0)
	{
		//recursion
		return gcd_alg(b, (a % b));
	}
}