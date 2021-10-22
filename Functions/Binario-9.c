#include <stdio.h>
#include <math.h>

int bin_to_dec(int n);
int dec_to_bin(int n);

int main(){

   int n;
   char c;
   printf("Opciones:\n");
   printf("1. Introduzca el caracter 'd' para convertir el binario en decimal.\n");
   printf("2. Introduzca el caracter 'b' para convertir el decimal a binario.\n");
   scanf("%c",&c);
   
   if (c =='d' || c == 'D'){

       printf("Digite un numero binario: ");
       scanf("%d", &n);
       printf("%d en binario = %d en decimal", n, bin_to_dec(n));
   }
   
   if (c =='b' || c == 'B'){

       printf("Digite un numero decimal: ");
       scanf("%d", &n);
       printf("%d en decimal = %d en binario", n, dec_to_bin(n));
   }
   return 0;
}

int dec_to_bin(int n){

    int rem, i=1, binary=0;
    
    while (n!=0){
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int bin_to_dec(int n){

    int decimal=0, i=0, rem;
    
    while (n!=0){
        rem = n%10;
        n/=10;
        decimal += rem * pow(2,i);
        ++i;
    }
    return decimal;
}