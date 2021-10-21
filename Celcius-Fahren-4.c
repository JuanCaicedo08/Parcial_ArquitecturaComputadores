#include<stdio.h>

int main(){


 float a,b,centi, fahren;
 int op;
 printf("\n\nSeleccione una opcion\n");
 printf("1. Fahrenheit a Celsius\n2. Celsius a Fahrenheit\n-> ");
 scanf("%d",&op);
 
 switch(op){
 case 1:
  printf("\nDigite el valor de la temperatura Fahrenheit: ");
  scanf("%f",&a);
  centi = 5*(a-32)/9;
  printf("\n\nTemperatura Celsius: %f ",centi);
  break;
 
 case 2:
  printf("\nDigite el valor de la temperatura Celsius: ");
  scanf("%f",&b);
  fahren = ((9*b)/5)+32;
  printf("\n\nTemperatura Fahrenheit: %f ",fahren);
  break;
 
 default:
 printf("\n\nSeleccion erronea.....Intente de nuevo!!!\n");
 }
 
 getch();

 return(0);
}