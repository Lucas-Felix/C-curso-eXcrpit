#include <stdio.h>
#include <stdlib.h>

int main(){
// caucluadora basica

	int num1, num2, soma, subtracao, mult, div;
	printf("escreva 2 numeros para serem processados:");
	scanf("%i%i", &num1, &num2);
	
	soma		 = num1 + num2;
	subtracao	 = num1 - num2;
	mult 		 = num1 * num2;
	div 		 = num1 / num2;
	
	printf("a soma e: %i\n", soma);
	printf("a subtracao e: %i\n", subtracao);
	printf("a multiplicacao e: %i\n", mult);
	printf("a divisao e: %i\n", div);
	
	
	
	return 0;
}
