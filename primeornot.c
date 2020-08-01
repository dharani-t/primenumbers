//# primenumbers
//checking if the number is prime or not
 
#include <stdio.h> 

int main() 
{ 
	int n, i, flag = 1; 

	 
	printf("Enter a number: \n"); 
	scanf("%d", &n); 
	for (i = 2; i <= sqrt(n); i++)
    { 
		// If n is divisible by any number between 
		// 2 and n/2, it is not prime 
		if (n % i == 0) 
		{ 
			flag = 0; 
			break; 
		} 
	} 

	if (flag == 1)
	{ 
		printf("%d is a prime number", n); 
	} 
	else
	{ 
		printf("%d is not a prime number", n); 
	} 

	return 0; 
} 
