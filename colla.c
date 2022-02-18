#include "stdio.h"

void colla(int n){
	while(n > 1){
		if(n%2 == 0){
			printf("%i\n", n/2);
			n = n / 2;
		}
		else{
			printf("%i\n", n+1);
			n = n + 1;	
		}
	}
}

int main(){
	colla(2128343);
	return 0;
}
