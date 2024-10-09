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
		fprintf(stderr, "Usage: %s <<max_num_range>\n", argv[element0]);
		exit(EXIT_FAILURE);
	}
	
	//if segmentation merit, use given parameters
	
	summ = sumMultiples(max_num_range);
	
	printf("%d", summ);
	exit(0);
}

int sumMultiples(int n)
{
	
	int sum = 0;
	vector<int> vn;
	for(unsigned int i = 0; i < v.size(); i++)
	{
		if(((v[i] % r) == 0) || ((v[i] % s) == 0))
		{
			sum += v[i];
		}
	}
}