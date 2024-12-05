#include <stdio.h>
#include <stdlib.h>


int main(){
	
float v1, v2;


printf("valor 1");
scanf("%f",&v1);
printf("valor 2");
scanf("%f",&v2);
	

	
	
if(v1>v2){

	printf("%f e maior que %f",v1 ,v2);
	
}
if(v2>v1){
	printf("%f e maior que %f",v2 ,v1);
}

if(v1==v2){
	printf("%f e igual a %f",v1 ,v2);
}
	
return 0;
}
