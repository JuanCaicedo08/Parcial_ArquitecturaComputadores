#include <stdio.h>

int prime(int n);
int armstrong(int n);

int main()
{
    char c;
    int n,temp=0;
    printf("Digite un numero positivo entero: ");
    scanf("%d",&n);
    printf("Introduzca la P para comprobar el primo y la A para comprobar el número de Armstrong: ");
    c = getchar();
    if (c=='p' || c=='P')
    {
        temp=prime(n);
        if(temp==1)
           printf("\n%d es un numero primo.", n);
        else
           printf("\n%d no es un numero primo.", n);
    }
    if (c=='a' || c=='A')
    {
        temp=armstrong(n);
        if(temp==1)
           printf("\n%d es un numero Armstrong.", n);
        else
           printf("\n%d no es un numero Armstrong.",n);
    }
    return 0;
}

int prime(int n)
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
    {
       if(n%i==0)
       {
          flag=0;
          break;
       }
    }
    return flag;
}

int armstrong(int n)
{
    int num=0, temp, flag=0;
    temp=n;
    while(n!=0)
    {
        num+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (num==temp)
       flag=1;
    return flag;
}