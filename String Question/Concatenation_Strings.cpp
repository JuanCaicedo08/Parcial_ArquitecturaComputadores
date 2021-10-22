#include <stdio.h>
#include <string.h>

int main(){
    char destination[] = "Hola ";
    char source[] = "Mundo!";
    
    strcat(destination,source);
    printf("Strings concatenados : %s\n", destination);
    
    return 0;
}
