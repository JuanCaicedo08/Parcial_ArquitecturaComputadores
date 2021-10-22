#include<stdio.h>

int main(){

    char op;
    int num1, num2, result = 0;

    while(1){

    printf("\nDigite el primer valor:");
    scanf("%d",&num1);

    printf("\nDigite un operador(+, -, *, /):");
    scanf(" %c",&op);

    printf("\nDigite el segundo valor:");
    scanf("%d",&num2);

    switch(op){

    case '+':
    result = num1 + num2;
    printf("\nResultado es = %d",result);
    break;
    
    case '-':
    result = num1 - num2;
    printf("\nResultado es = %d",result);
    printf("\n\nPulse de nuevo Enter para una nueva operacion\n");
    break;
    
    case '*':
    result = num1 * num2;
    printf("\nResultado es = %d",result);
    printf("\n\nPulse de nuevo Enter para una nueva operacion\n");
    break;
    
    case '/':
    result = num1 / num2;
    printf("\nResultado es = %d",result);
    printf("\n\nPulse de nuevo Enter para una nueva operacion\n");
    break;
    
    default:
    printf("\nErrooor!!!\n");
    printf("\n\nPulse de nuevo Enter para una nueva operacion\n");
    }
    
    }
}

