#include <stdio.h>  
#include<string.h>  

int main(){
  
   char str1[20];  
   char str2[20];
   int value;
     
   printf("Ingrese el primer string -> ");  
   scanf("%s",str1);  
   printf("Ingrese el segundo string -> ");  
   scanf("%s",str2);  
   
   value=strcmp(str1,str2);  
   
   if(value==0){
   		printf("Los string son iguales");  	
   }  
   else{
		printf("Los string no son iguales");  
   }  
   
   return 0;  
}  
