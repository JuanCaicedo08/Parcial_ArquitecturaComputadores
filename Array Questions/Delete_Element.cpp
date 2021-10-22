#include <stdio.h>

int main(){
	int i = 0;
	int arr[50];
	int pos;
	int len;
	
	printf("Introduzca el numero de elementos de la matriz -> ");
	scanf("%d",&len);
	
	printf("\nIntrodzca %d elementos para la matriz -> \n",len);
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nIngrese la posicion del elemento a eliminar -> ");
	scanf("%d",&pos);
	
	i = pos - 1;
	
	while(i<len -1){
		arr[i] = arr[i+1];
		i++;
	}
	len--;
	printf("\nMatriz despues de borrar un elemento : ");
	for(i = 0; i < len; i++){
		printf(" %d",arr[i]);
	}
}
