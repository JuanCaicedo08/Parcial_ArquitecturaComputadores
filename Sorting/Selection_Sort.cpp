#include <stdio.h>

int main(){
	int a[100], n, i, j, position, swap;
	printf("Ingrese el numero de elementos -> ");
	scanf("%d", &n);
	printf("Ingrese %d numeros : \n", n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	for(i = 0; i < n - 1; i++){
		position=i;
		for(j = i + 1; j < n; j++){
			if(a[position] > a[j])
				position=j;
		}
		if(position != i){
			swap=a[i];
			a[i]=a[position];
			a[position]=swap;
		}
	}
	
	printf("Matriz Ordenada : \n");
	for(i = 0; i < n; i++)
		printf("%d\n", a[i]);
		
	return 0;
}
