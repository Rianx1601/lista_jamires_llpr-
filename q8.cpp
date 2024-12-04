#include <stdio.h>
#include <stdlib.h>

int main(){


float n1, n2, nf, mdp, mdf;



printf("nota 1");
scanf("%f",&n1);
printf("nota 2");
scanf("%f",&n2);

mdp=(n1+n2)/2;


if(mdp>=7){
	
	printf("aprovado");	
	
}else{
	
	printf("recuperacao");
	scanf("%f",&nf);
	mdf=(n1+n2+nf)/3;
	
	if(mdf>=5){
		printf("aprovado com recuperacao");
	}else{
		printf("reprovado");
	}
 
}
system("pause");
return 0;
}
