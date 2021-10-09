#include <stdio.h> 
#include <iostream>

void printBinary(int n, int i) 
{ 

	//Hacemos la conversion a binario
	int k; 
	for (k = i - 1; k >= 0; k--) { 

		if ((n >> k) & 1) 
			printf("1"); 
		else
			printf("0"); 
	} 
} 

typedef union { 

	float f; 
	struct
	{ 
//literalmente es la estructura que debe tener
		unsigned int mantissa : 23; 
		unsigned int exponent : 8; 
		unsigned int sign : 1; 

	} raw; 
} myfloat; 


void printIEEE(myfloat var) 
{ 
	// Imprime formato IEEE 754  

	printf("%d | ", var.raw.sign); 
	printBinary(var.raw.exponent, 8); 
	printf(" | "); 
	printBinary(var.raw.mantissa, 23); 
	printf("\n"); 
} 


int main() 
{ 
int variable;
    std::cout << "Que numero desea convertir: ";
    std::cin >> variable;
    
	myfloat var; 
	var.f = variable; 

	// Representacion IEEE 754
	printf("La representacion de IEEE 754  %f es : \n", 
		var.f); 
	printIEEE(var); 

	return 0; 
} 

