

#include <stdio.h>

int main(){
	
	int list[4] =  {10 , 2 , 4 , 6};
	int i , f ;
	f = list[0];
	
	for(i = 0 ; i < 4 ; i++){
		
		if(f < list[i]){
			list[i] = f;
		}else{
			
			f = list[i];
		}
		
	printf("\n%d", f);
	}
	
}
