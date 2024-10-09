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

// #include <cmath>
#include <math.h>
// #include <cstdio>
#include <stdio.h>
// #include <cstring>
#include <string.h>
// #include <cstdlib>
#include <stdlib.h>

//prototypes
int summation(int);

int main(int argc, char *argv[])
{
	//declarations
	int num_param, summ, max_num_range, element0, element1, element2;
	
	//definitions
	num_param = 2;
	element0 = 0;
	element1 = 1;
	
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
	summ = summation(max_num_range);
	
	printf("%d\n", summ);
	exit(0);
}

int summation(int n)
{
	int sum = 0;
	int v[n];

	for(unsigned int i = 0; i < n; i++)
	{
		v[i] = i;
		//printf("v[%d] is %d\n", i, v[i]);
	}

	for(unsigned int i = 0; i < n; i++)
	{
		if(((v[i] % r) == 0) || ((v[i] % s) == 0))
		{
			//printf("v[%d] is %d\n", i, v[i]);
			sum += v[i];
			//printf("After adding %d, sum is %d\n", v[i], sum);
		}
	}

	return sum;
}