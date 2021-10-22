#include <stdio.h>
#include <string.h>


int espalindromo(char * cadena) {
 
    int longitud = strlen(cadena);
 
    if (longitud <= 1) return 1;
 
    int inicio = 0, fin = longitud - 1;
 
    while (cadena[inicio] == cadena[fin]){
       
        if (inicio >= fin) return 1;
        
        inicio++;
        fin--;
    }
    
    return 0;
}
