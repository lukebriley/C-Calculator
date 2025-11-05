/*
Luke Riley

CSE 130 - Tuesday

Fall 2025

Lab 4 - Calculator Improved
*/

#include<stdio.h>
#include<math.h>

//Functions
int add(int numA, int numB) {return numA + numB; }			//addition
int subtract(int numA, int numB) {return numA - numB; }		//subtraction
int multiply(int numA, int numB) {return numA * numB; }		//Multiplication
int divide(int numA, int numB) {return numA / numB; }		//Division

int mod(int numA, int numB) {return numA % numB; }			//Modulus
int primeCheck(int numA) {									//Prime
	if (numA <= 1) {	//Not Prime
		printf("\nNot Prime\n\n");
		}
	else if (numA == 2 || numA == 3) {	//2 and 3 are prime
		printf("\nPrime\n\n");
		}
	else if (numA % 2 == 0 || numA % 3 == 0) {	//If it can be divided by 2 or 3 evenly, its not prime
		printf("\nNot Prime\n\n");
		}
    else {	//Prime
		printf("\nPrime\n\n");
        }	
}
unsigned long long int factorialCalc(int numA){				//Factorial
	if (numA == 0 || numA == 1) {
		return 1; //Factorial of 0 and 1 is 1
	} 
	long long int factorial = 1;
	for (int i = 2; i <= numA; i++) {
        factorial *= i;
    }
    return factorial;
}
int power(int numA, int numB) {return pow(numA, numB); }	//Power
int fibonacciCalc(int fibonacciSequence[], int numA){		//Fibonacci Sequence
	if (numA >= 1) {
        fibonacciSequence[0] = 0;	//First term is 0
    }
    if (numA >= 2) {
        fibonacciSequence[1] = 1;	//Second term is 1
    }
    
	for (int i = 2; i <numA; ++i){	//Calculate subsequent terms and add to array
		fibonacciSequence[i] = fibonacciSequence[i - 1] + fibonacciSequence[i - 2];
	}
	printf("\nThe Fibonacci Sequence is: ");
    for (int i = 0; i < numA; i++) {
        printf("%d ", fibonacciSequence[i]);
    } 
}
	

int main()
{
	//define variables
	int iInput = 0;
	int numA = 0;
	int numB = 0;
	
	do {	
		printf("Calculator Menu:\n(1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n(5) Modulus (integers only)\n(6) Test if prime (integers only)\n(7) Factorial\n(8) Power\n(9) Fibonacci Sequence\n(0) Exit\n\n");
		printf("Please choose an operation: ");
		scanf("%d", &iInput);
		
		if (iInput == 1) {	//Addition
			printf("\nEnter the first number: ");
			scanf("%d", &numA);
			printf("\nEnter the second number: ");
			scanf("%d", &numB);
			int sum = add(numA, numB);
			printf("\n%d + %d = %d\n\n", numA, numB, sum);
		}
		
		else if (iInput == 2){ //Subtraction
			printf("\nEnter the first number: ");
			scanf("%d", &numA);
			printf("\nEnter the second number: ");
			scanf("%d", &numB);
			int difference = subtract(numA, numB);
			printf("\n%d - %d = %d\n\n", numA, numB, difference);
		}
			
		else if (iInput == 3){ //Multiplication
			printf("\nEnter the first number: ");
			scanf("%d", &numA);
			printf("\nEnter the second number: ");
			scanf("%d", &numB);
			int product = multiply(numA, numB);
			printf("\n%d * %d = %d\n\n", numA, numB, product);
		}
		
		else if (iInput == 4){ //Division
			printf("\nEnter the first number: ");
			scanf("%d", &numA);
			printf("\nEnter the second number: ");
			scanf("%d", &numB);
			int quotient = divide(numA, numB);
			printf("\n%d / %d = %d\n\n", numA, numB, quotient);
		}
		
		else if (iInput == 5){ //Modulus
			printf("\nEnter the first number: ");
			scanf("%d", &numA);
			printf("\nEnter the second number: ");
			scanf("%d", &numB);
			int remainder = mod(numA, numB);
			printf("\n%d %% %d = %d\n\n", numA, numB, remainder);
		}	
		
		else if (iInput == 6){ //Test if Prime
			printf("\nEnter the number to be tested: ");
			scanf("%d", &numA);
			int primeResult = primeCheck(numA);
    	}
    	else if (iInput == 7){ //Factorial
    	printf("\nInput number for factorial: ");
    	scanf("%d", &numA);
    	int factorialResult = factorialCalc(numA);
    	printf("\nFactorial of %d is %lld\n\n", numA, factorialResult);
		}
		else if (iInput == 8){ //Power
			printf("\nEnter the base number: ");
			scanf("%d", &numA);
			printf("\nEnter the exponent number: ");
			scanf("%d", &numB);
			int exponential = power(numA, numB);
			printf("\n%d^%d = %d\n\n", numA, numB, exponential);
		}
		else if (iInput == 9){
			printf("\nEnter the number of terms: ");
    		scanf("%d", &numA);
    		int fibonacciArray[numA];
    		fibonacciCalc(fibonacciArray, numA);
    		printf("\n\n");
		}
	} while(iInput != 0);	//Escape condition
	
	printf("\nEXITING CALCULATOR\n");
	return 0 ;
}