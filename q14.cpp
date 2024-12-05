#include <stdio.h>
#include <stdlib.h>


int main(){
	
float altura, pi;
int x;


printf("informe altura");
scanf("%f",&altura);
printf("digite um se vc for do sexo maxculino e 2 de for do sexo feminino");
scanf("%d",&x);
	

	
	
if(x==1){
	pi=(72.7*altura)-58;
	printf("ideal %f",pi);
}

if(x==2){
	pi=(62.1*altura)-44.7;
	printf("ideal %f",pi);
}	
if(x!=1 && x!=2){
		printf("sexo nao valido comecede denovo");
}
return 0;
}
