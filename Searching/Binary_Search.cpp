#include <stdio.h>

int main(){
  	int c, first, last, middle, n, search, array[100];
	
  	printf("Ingrese el numero de elemntos -> ");
  	scanf("%d", &n);

  	printf("Ingrese %d enteros : \n", n);

  	for (c = 0; c < n; c++)
    	scanf("%d", &array[c]);

  	printf("Introduzca el valor a encontrar -> ");
  	scanf("%d", &search);

  	first = 0;
  	last = n - 1;
  	middle = (first+last)/2;

  	while (first <= last) {
    	if (array[middle] < search)
      		first = middle + 1;
    	else if (array[middle] == search) {
      		printf("%d Encontrado en el lugar %d.\n", search, middle+1);
      		break;
    	}
    	else
      		last = middle - 1;

    middle = (first + last)/2;
  	}
  
  	if (first > last)
    	printf("¡No se ha encontrado! %d no esta presente en la lista.\n", search);

  return 0;
}
