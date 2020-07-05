#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){
// if e else 
	char c;
	printf("digite um numero com letra minuscula ");
	scanf ("%c", &c);
	
	if (c >= 'A')
	{	
		printf (" a letra minuscula só q maiuscula agr > %c <", toupper(c));
	}
	

	
	return 0;
}
