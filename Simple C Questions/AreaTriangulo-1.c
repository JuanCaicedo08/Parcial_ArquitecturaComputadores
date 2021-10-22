#include<stdio.h>  

int main(){ 

    float b, h, area;  

    printf("Digite base y altura del triangulo\n-> ");
    scanf("%f %f",&b,&h);

    area = (b*h) / 2 ;  

    printf("\nEl Area del triangulo es : %f \n\n",area);  
    return (0);  
}  