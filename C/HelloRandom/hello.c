/*
	C's C Program - What is your Dream?
	do you prefer to include cfile or file.h where file is any file in the library?
	cfile is preferable, but these variables are synonymous
	use depending on IDE
	Let's have some fun with random (causal) numbers: biases
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//for portability
//#include <cstdio>
//#include <cstdlib>
//#include <cmath>


//Driver
int main(int argc, char *argv[]){
	
	//for kicks - recall the following output:
	//Color red, Number 123456, Float 3.14
	//printf("Color %s, Number %d, Float %4.2f", "red", 123456, 3.14);
	
	//Declarations
	int i, j, r, nth_param, nth_loop, max_num, min_num, count_zero;
	unsigned int nth_seed;
	
	//Definitions
	r = 0;
	nth_param = 3;
	max_num = 9;
	min_num = 0;
	count_zero = 0;
	
	// Check for the correct number of parameters
	//usage: ./hello.exe <nth_seed> <nth_loops>
	// be cautious - avoid segmentation fault
	if (argc != nth_param) {
		fprintf(stderr, "Usage: %s <nth_seed> <nth_loops>\n", argv[0]);
		fprintf(stderr, "Please provide two parameters: a seed value and the number of loops.\n");
		exit(EXIT_FAILURE);
	}	
	
	//if segmentation merit - use the parameters given by the user
	nth_seed = atoi(argv[1]);
	nth_loop = atoi(argv[2]);	
	
	//check the user
	for (i=0; i<argc; i++){
		printf("argv[%d", i);
		printf("] is  %s ", argv[i]);
		printf("\n"); //enter newline
	}
	
	//Check the seeds to plant
	printf("nth_seed is %d ", nth_seed);
	printf("\n");
	printf("nth_loop is %d ", nth_loop);
	printf("\n");
	
	//check rand's range
	printf("RAND_MAX is ");
	printf(" %d ", RAND_MAX);
	printf("\n");


	//plant a seed
	srand(nth_seed);
	
	//Use the following code to generate messages
	for (j=0; j<nth_loop; j++){
		//utilize modulus to simulate randomness bias which is no longer random in the abstract sense; is TRUE randomness possible to achieve: laws of causality?
		r = (rand() % (max_num + 1 - min_num) + min_num);
		printf("random number is ");
		printf(" %d ", r);
		printf("\n");
		
		if(r == 0){
			count_zero += 1;
		}
	}

	if (r == 0){
		printf("In this world, is the destiny of mankind controlled by some transcendental entity or law? Is it like the hand of God hovering above? At least it is true that man has no control; even over his own will. ");
		printf("\n");
	}
	else{
		printf("If you're always worried about crushing the ants beneath you... you won't be able to walk. ― Kentaro Miura");
		printf("\n");
	}
	
	printf("\n");
	printf("Number of times rolled zero: %d", count_zero);
	printf("\n");
	
	exit(EXIT_SUCCESS);
	return 0;
}
