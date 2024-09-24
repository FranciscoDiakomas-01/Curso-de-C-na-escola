#include<stdio.h>

void SayMyName(char name[20]){
	printf("%s", name);
}

int main(){
	char name[20];
	
	printf("Entre com o nome: ");
	scanf("%s", &name);
	SayMyName(name);
}
