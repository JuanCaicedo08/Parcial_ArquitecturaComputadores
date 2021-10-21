
#include <stdio.h>

int main(){
 
    double num1, num2, num3;

    printf("Digite 3 numeros: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1>=num2)
    {
        if(num1>=num3)
            printf("%.2lf es el numero mayor. ", num1);
        else
            printf("%.2lf es el numero mayor. ", num3);
    }
    else
    {
        if(num2>=num3)
            printf("%.2lf es el numero mayor. ", num2);
        else
            printf("%.2lf es el numero mayor.",num3);
    }
    
    return 0;

}