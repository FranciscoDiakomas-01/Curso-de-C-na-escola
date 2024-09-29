

#include <stdio.h>

int main(){
	
	float notas[3]  = {10 , 10 , 10};
	float media = 0;
	int i;
	for(i = 0 ; i <= 3 ; i++){
		media += notas[i];
	}
	 media /= 3;
	printf("Media : %2.f" , media);
}
