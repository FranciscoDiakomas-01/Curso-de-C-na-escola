

#include <stdio.h>


int main(){
	
	int number = 30;
	int list[4] = {20 , 30 , 40 , 50};
	
	int i  = 0 , response , index;
	
	for(i  = 0 ; i < 3 ; i++){
		if(list[i]  == number){
			
			response = list[i];
			index = i;
			break;
		}else{
			index = -1;
		}
	}
	
	if(index == -1){
		printf("Numero nao encotrado");
	}else{
		printf("Numero : %d , na posicao Index : %d" , response , index);
	}
	
}
