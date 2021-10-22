#include <stdio.h>
int main(){
		
	int array[100], search, c, n;

	printf("Ingrese el numero de elementos -> ");
	scanf("%d", &n);

	printf("Ingrese %d enteros : \n", n);

	for (c = 0; c < n; c++)
		scanf("%d", &array[c]); 

	printf("Ingrese el nuemro a buscar -> ");
	scanf("%d", &search);

	for (c = 0; c < n; c++){
		if (array[c] == search){
      		printf("%d esta en la posicion %d.\n", search, c+1);
      		break;
    	}
	}
  
	if (c == n)
		printf("%d no existe en el array .\n", search);

  return 0;
}
