#include <stdio.h>

//sistema de autenticação
int main(){
    
    int senha, cargo;
    
    printf("Digite a senha:");
    scanf("%d",&senha);
    
    if(senha==1234){
       printf("Acesso permitido:");
       printf("digite deu cargo(1-adm 2-gerente 3-funcionario)");
       scanf("%d",&cargo);
       
       switch (cargo) {
	 case 1:
		printf ("Acesso total ao sistema");
		break;
	 case 2:
		printf ("Acesso parcial (relatórios e estoque)");
		break;
	 case 3:
		printf("Acesso básico (apenas consultas)");
		break;
	 default :
        printf("Cargo invalido\n");
        break;
       }

    }else{
        printf("Acesso negado");
    }
    

    return 0;
}
