 #include<stdio.h>

int main(){

 int num;

 printf("\nDigite cualquier número para comprobar si es par o impar :\n");
 scanf("%d", &num);

 if (num%2 == 0) {
    printf("%d es PAR\n", num);
 }
 else {
    printf("%d es IMPAR\n", num);
 }
 return 0;
}