#include<stdio.h>
 
int main(){
	
	int i = 0;
	int j = 0;
	int filas = 0;
	int columnas = 0;
	int a[10][10];
	int b[10][10];
	int isEqual;
  
 	printf("Introduzca el numero de filas y columnas : ");
 	scanf("%d %d", &i, &j);
 
 	printf("\nIntroduzaca los elementos de la matriz 1 : \n");
 	for(filas = 0; filas < i; filas++){
   		for(columnas = 0;columnas < j;columnas++){
      		scanf("%d", &a[filas][columnas]);
    	}
  	}
   
 	printf("\nIntroduzaca los elementos de la matriz 2 : \n");
 	for(filas = 0; filas < i; filas++){
   		for(columnas = 0; columnas < j; columnas++){
      		scanf("%d", &b[filas][columnas]);
    	}
  	}
  	isEqual = 1;
  	
 	for(filas = 0; filas < i; filas++){
   		for(columnas = 0; columnas < j; columnas++){
      		if(a[filas][columnas] != b[filas][columnas]){
			  	isEqual = 0;
			  	break;
			}    
   	 	}
  	}
  	
 	if(isEqual == 1){
 		printf("\nMatriz A es igual a la matriz B");		
	}
	else{
		printf("\nMatriz A no es igual a la matriz B");
	}	
 	return 0;
}
