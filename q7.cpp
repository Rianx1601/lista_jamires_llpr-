#include <stdio.h>
#include <stdlib.h>

int main(){

int id;
float in;



printf("diga sua idade");
scanf("%d",&id);
printf("valor do ingreco");
scanf("%f",&in);

if(in>=60){
	in=in-(in*0.3);
	
	printf("%f",in);	
	
}else{
	in=in-(in*0.1);
	printf("%f",in);
 
}
system("pause");
return 0;
}
