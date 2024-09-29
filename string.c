

#include <stdio.h>

void Saudar(char name[20]){
	
	printf("Bom dia %s" , name);
	
}

int main(){
	
	char name[20];
	
	printf("Informe seu nome : ");
	scanf("%s", &name);
	Saudar(name);
	return 0;
}
