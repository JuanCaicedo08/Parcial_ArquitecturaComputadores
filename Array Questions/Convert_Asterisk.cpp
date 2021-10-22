#include <stdio.h>
#include<conio.h>

int main(){
	char c[] = "**********.";
	char c2 = 'A';
	int i = 0;
	
	while(c){
		c2 = getch();
		printf("%c\a",c[i]);
		i++;
		
		if(i == 10){
			printf("");
			i = 0;
		}
	}
}
