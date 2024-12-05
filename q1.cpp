#include <stdio.h>
#include <stdlib.h>


int main(){
	
float altura, peso, imc;


printf("informe altura");
scanf("%F",&altura);
printf("informe peso");
scanf("%F",&peso);
	
imc=(altura*altura)/peso;
	
	
if(imc>=18.5 && imc){
	
	printf("ta na faicha");
}else{

if(imc<18.5){
	printf("ta muito magor");
}	
if(imc>24.9){
	
	printf("tamuito grande");
}
}	
return 0;
}
