 #include<stdio.h>

int main(){
  
   int num, rem, rev = 0;

   printf("Digite cualquier número que desee invertir :\n");
   scanf("%d", &num);

   while (num >= 1){

      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;

   }

   printf("\nNumero Invertido : %d\n", rev);
   
   return (0);
}