#include <stdio.h>

//dias da semana
int main(){
    
    int dia;
    
    printf("Digite um numero (1-7):");
    scanf("%d",&dia);
    
    switch (dia) {
	 case 1:
		printf ("domingo");
		break;
	 case 2:
		printf ("segunda");
		break;
	 case 3:
		printf("terça");
		break;
	 case 4:
		printf("quarta");
		break;
	case 5:
		printf ("quinta");
		break;
	 case 6:
		printf("sexta");
		break;
	 case 7:
		printf("sabado");
		break;
    default :
        printf("Dia invalido\n");
        break;
    }

    return 0;
}
