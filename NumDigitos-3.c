#include<stdio.h>

int main(){

   int n,count=0;
  
   printf("Digite cualquier numero para contar digitos : \n\n");
   scanf("%d", &n);
  
   while(n!=0){

       n/=10;          
       ++count;
   }
   
   printf("\nEl numero de digitos es = %d",count);
   
   return 0;
}