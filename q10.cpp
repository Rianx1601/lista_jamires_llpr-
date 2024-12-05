#include <stdio.h>
#include <stdlib.h>


int main(){
	
float salario, emp, sala20;


printf("informe o salario");
scanf("%f",&salario);
printf("informe o valor do emprestimo");
scanf("%f",&emp);
	
sala20=salario*0.2;
	
	
if(sala20>=emp){

	printf("consedido");
	
}else{
	printf("negado");
}
	
return 0;
}
