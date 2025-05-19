#include <stdio.h>

//calculadora de operações basicas
int main(){
    
    int n1,n2,resultado;
    char operador;
    printf("Digite dois numeros e um operador:");
    scanf("%d %d %c",&n1,&n2,&operador);
    
    switch (operador) {
	 case'+':
	    resultado=n1+n2;
		printf ("Resultado: %d",resultado);
		break;
	 case '-':
	    resultado=n1-n2;
		printf ("Resultado: %d",resultado);
		break;
	 case'*':
	    resultado=n1*n2;
		printf("Resultado: %d",resultado);
		break;
	 case'/':
	    resultado=n1/n2;
		printf("Resultado: %d",resultado);
		break;
    default :
        printf("Opção Inválida\n");
        break;
    }


    return 0;
}

