#include<stdio.h>

int main(){

float radius=0.0,height=0.0;
char quit;
int choice;
const float pi=3.1415658;

do{
        
    printf("\n======================================="); 
    printf("\nQue operacion quiere calcular?");
    printf("\n1. Area del Circulo");
    printf("\n2. Circunferencia del Circulo");
    printf("\n3. Volumen del Cilindro");
    printf("\n0. Salir");
    printf("\n=======================================\n");
    printf("\nDigite la opcion que desea:");
    scanf("%d",&choice);

    switch (choice){
    case 1:
    printf("\nDigite el radio del Circulo:");
    scanf("%f",&radius);
    printf("\n=======================================");
    printf("\nArea del Circulo = %.5f",radius*radius*pi);
    printf("\n=======================================");
    break;

    case 2:
    printf("\nDigite el radio del Circulo:");
    scanf("%f",&radius);
    printf("=======================================");
    printf("\nDigite la circunferencia del Circulo = %.5f",2*radius*pi);
    printf("\n=======================================");
    break;
    
    case 3:
    printf("\nDigite el radio del Cilindro:");
    scanf("%f",&radius);
    printf("\nDigite la altura del Cilindro:");
    scanf("%f",&height);
    printf("\n=======================================");
    printf("\nVolumen del Cilindro = %.5f",radius*radius*pi*height);
    printf("\n=======================================");
    break;
    
    case 0:
        quit='y';
        break;
    default:
    
    printf("\n=======================================");
    printf("\nOpcion Incorrecta....Error!!!\n");
    printf("=======================================");
    break;
    
    }
    
    }while(quit != 'y');

return 0;
}