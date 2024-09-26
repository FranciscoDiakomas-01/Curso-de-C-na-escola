
#include<stdio.h>

float media(float n1 , float n2){
	
	//verificando se os valores sao diferentes de 0
	
	if(n1 == 0 || n2 == 0){
		return 0;
	}else{
	
		float med = (n1 + n2) / 2;
		return med;
	}
}

int main(){
	float nota1 , nota2 , resposta;
	
	printf("Informe a primeira nota : ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota : ");
	scanf("%f", &nota2);
	resposta = media(nota1 , nota2);
	
	if(resposta == 0){
		printf("Ocorreu um Erro");
		return 1;
	}else{
		return printf("%f" , resposta);
	}

}



