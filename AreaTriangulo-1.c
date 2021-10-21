#include<stdio.h>  

int main(){ 

    float b, h, area;  
    printf("Digite base del triangulo\n-> ");
    scanf("&f",b);

    printf("Digite altura del triangulo\n-> ");
    scanf("&f",h); 

    area = (b*h) / 2 ;  

    printf("\n\nEl Area del triangulo es : %f",area);  
    return (0);  
}  