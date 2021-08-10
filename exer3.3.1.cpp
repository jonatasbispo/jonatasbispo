#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL,"Portuguese");
  
  int i,num;
 	/* printf("Informe um número");
  	scanf("%d",&num);*/
  for (i=0;i<100;i++)
  printf("%d \n",i);



system ("pause");
return 0;
}
