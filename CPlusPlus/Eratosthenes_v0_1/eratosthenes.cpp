/*
Sieve of Eratosthenes for c++
Author: CGM-09/11/2018
Logic: determine if a given integer value is prime or composite
		utilize the Sieve of Eratosthenes
*/



//ignore commented code below
//define globals

//this is limited by the size of the buffer being used
//int const N = 1000;	//find all primes in range where max. range is no more than N

//int prime_arr[N];
// #include <iostream>
// #include <cmath>
#include <math.h>
// #include <cstdio>
#include <stdio.h>
// #include <cstring>
#include <string.h>
// #include <cstdlib>
#include <stdlib.h>
//#include <iomanip>
//#include <iostream>

//using namespace std;


//define globals
int num_param, element0, element1, element2;

//prototypes
int isItPrime(int);
void eratosthenes(set <int> &, int);
void print_primes(const set <int> &, int)

int main(int argc, char *argv[])
{
	//printf("Color %s, Number %d, Float %4.2f", "red", 123456, 3.14);
	
	//declarations
	int test_prime, max_sieve_range, i;
	std::set <int> set;
	
	//definitions
	num_param = 3;
	element0 = 0;
	element1 = 1;
	element2 = 2;
	
	i = 2;
	
	//be careful - avoid segmentation fault 
	if(argc != num_param)
	{
		fprintf(stderr, "Usage: %s <test_prime> <max_sieve_range>\n", argv[element0]);
		exit(EXIT_FAILURE);
	}
	
	//if segmentation merit, use given parameters
	test_prime = atoi(argv[element1]);
	max_sieve_range  = atoi(argv[element2]);
	
	if(isItPrime(test_prime) == 1)
	{
		// cout << test_prime << " is prime.";
		
		printf("%d", test_prime);
		printf(" is prime. \n");
	}
	else
	{
		
		if(test_prime != 0 && test_prime != 1)
		{
			// cout << test_prime << " is composite.";
			printf("%d", test_prime);
			printf(" is composite. \n");
		}
		else 
		{
			printf("%d", test_prime);
			printf(" is neither prime nor composite by definition. \n");
		}
	}
	

	eratosthenes(set, max_sieve_range);
	print_primes(set, max_sieve_range);
	
	exit(0);
}




int isItPrime(int n)
{
	if( n == 1 || n == 0)
	{
		//o and 1 are neither prime nor composite by definition
		return 0;
	}
	else
	{
		//loop from 2 to n
		int i = 2;
	
		while(i*i <= n)
		{
			if(n % i == 0)
			{
				//we have found a factor, i.e., n is composite
				return 0;
			}

			i += 1;
		}
		
		//we did not find a factor between 2 and sqrt(n), i.e., n is prime
		return 1;
	}
	
}

/****************************************************************
   SUBROUTINE: void eratosthenes(set <int> &s, int n) 

   ARGUMENTS: a reference to a set container of integer objects and 
   				an integer to represent the upper limit

   RETURNS: nothing

   NOTES:This subroutine uses the Sieve of Eratosthenes
   			to find all the prime numbers less than the 
   			passed in integer and stores them in the 
   			passed in set container.
****************************************************************/

void eratosthenes(set <int> &sieve_set, int max_n)
{

	for(int element = element2; element < n; element++)
	{
		sieve_set.insert(element);
	}
	
	int multiple;
	
	for(int i = element2; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			multiple = i*j;//reset the multiple of i
			sieve_set.erase(multiple);
		}
	}
}


/****************************************************************
   SUBROUTINE: void print_primes(const set <int> &s) 

   ARGUMENTS: a reference to a set container of integer objects

   RETURNS: nothing

   NOTES:This subroutine prints the values in the set s.
****************************************************************/
void print_primes(const set <int> &s, int n)
{
		
	 	printf("\nThe upper limit for the set of primes: %d", n);
		
	 	
	 	int count = 0;//use a count variable to keep track of how many elements were printed.

        for(auto i = s.cbegin(); i != s.cend(); ++i)//loop through every element in the vector.
        {
                printf("\n%d ", setw(ITEM_W));
				printf("%d ", *i);//use setw() to allocate the number of spaced each number uses.

                count++;//increment the counter.

                if(count == NO_ITEMS)//check to make sure that count isn't larger than NO_ITEMS
                {
                        printf("\n");//go to a new line.
                        count = 0;//reset the count
                }
        }
        printf("\n");// go to a new line	 	
}


/*********************************************************************
sample output:

	upper limit for the set of primes: 1000

   2    3    5    7   11   13   17   19   23   29   31   37   41   43   47   53
  59   61   67   71   73   79   83   89   97  101  103  107  109  113  127  131
 137  139  149  151  157  163  167  173  179  181  191  193  197  199  211  223
 227  229  233  239  241  251  257  263  269  271  277  281  283  293  307  311
 313  317  331  337  347  349  353  359  367  373  379  383  389  397  401  409
 419  421  431  433  439  443  449  457  461  463  467  479  487  491  499  503
 509  521  523  541  547  557  563  569  571  577  587  593  599  601  607  613
 617  619  631  641  643  647  653  659  661  673  677  683  691  701  709  719
 727  733  739  743  751  757  761  769  773  787  797  809  811  821  823  827
 829  839  853  857  859  863  877  881  883  887  907  911  919  929  937  941
 947  953  967  971  977  983  991  997



**********************************************************************/
