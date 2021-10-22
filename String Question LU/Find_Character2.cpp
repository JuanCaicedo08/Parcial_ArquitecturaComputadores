#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i;
 
    printf("Ingrese el string -> ");
    gets(s);
    printf("Introduzca el caracter a buscar -> ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
		    printf("Caracter '%c' encontrado en : %d\n ",c,i+1);
 
		}
 	}
     
    return 0;
}
