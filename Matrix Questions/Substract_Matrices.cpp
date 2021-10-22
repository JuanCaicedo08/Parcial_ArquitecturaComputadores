#include <stdio.h>

int main() {
	int r = 0;
	int c = 0;
	int a[100][100];
	int b[100][100];
	int res[100][100];
	int i = 0;
	int j = 0;
	
  
  	printf("Introduzca el número de filas (entre 1 y 100) -> ");
  	scanf("%d", &r);
  	printf("Introduzca el número de columnas (entre 1 y 100) -> ");
  	scanf("%d", &c);

  	printf("\nIntroduzca los elementos de la primera matriz : \n");
 	for (i = 0; i < r; ++i)
    	for (j = 0; j < c; ++j) {
      		printf("Ingrese el elemnto a%d%d: ", i + 1, j + 1);
      		scanf("%d", &a[i][j]);
    }

    printf("\nIntroduzca los elementos de la segunda matriz : \n");
 	for (i = 0; i < r; ++i)
    	for (j = 0; j < c; ++j) {
      		printf("Ingrese el elemnto a%d%d: ", i + 1, j + 1);
      		scanf("%d", &b[i][j]);
	}

  	// substract two matrices
  	for (i = 0; i < r; ++i)
    	for (j = 0; j < c; ++j) {
      		res[i][j] = a[i][j] - b[i][j];
    }

  	// printing the result
  	printf("\nResta de las 2 matrices : \n");
  	for (i = 0; i < r; ++i)
    	for (j = 0; j < c; ++j) {
      		printf("%d   ", res[i][j]);
      		if (j == c - 1) {
        		printf("\n\n");
      		}
    	}

  return 0;
}

