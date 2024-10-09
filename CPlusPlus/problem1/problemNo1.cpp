/*********************************************************************
        Project Euler - Archived Problems and Solutions
		Programmer: Cruz G. Macias
		Problem No.: 1
        Purpose: If we list all the natural numbers below 10 that are 
		multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these 
		multiples is 23.

		Find the sum of all the multiples of 3 or 5 below 1000.
*********************************************************************/
//define globals
int r, s;

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
//using namespace std;

//prototypes
int sumMultiples(int);


int main(int argc, char *argv[])
{
	//printf("Color %s, Number %d, Float %4.2f", "red", 123456, 3.14);
	
	//declarations
	int num_param,summ, max_num_range, i, element0, element1, element2;
	
	//definitions
	num_param = 2;
	element0 = 0;
	element1 = 1;
	element2 = 2;
	
	r = 5;
	s = 3;
	
	//be careful - avoid segmentation fault 
	if(argc != num_param)
	{
		fprintf(stderr, "Usage: %s <max_num_range>\n", argv[element0]);
		exit(EXIT_FAILURE);
	}
	
	//if segmentation merit, use given parameters
	max_num_range = atoi(argv[element1]);
	summ = sumMultiples(max_num_range);
	
	printf("%d", summ);
	exit(0);
}

int sumMultiples(int n)
{
	//printf("n = %d\n", n);
	int sum = 0;
	std::vector<int> v(n - 1);  // Create a vector of size n-1

	// Populate the vector with values from 1 to n-1
	for (int i = 0; i < n - 1; ++i)
	{
		v[i] = i + 1;
	}

	for (unsigned int i = 0; i < v.size(); i++)
	{
		//printf("v[i] = %d\n", v[i]);
		if (((v[i] % r) == 0) || ((v[i] % s) == 0))
		{
			//printf("before assigning sum = %d\n", sum);
			sum += v[i];
			//printf("after assigning sum = %d\n", sum);
		}
	}

	return sum;
}