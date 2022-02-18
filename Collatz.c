#include "stdio.h"

void collatz(int n){
	while(n > 1){
		if(n%2 ==  0){
			printf("%i\n", n / 2);
			n = n / 2;
		}else{
			printf("%i\n" ,n*3 + 1);
			n = (n * 3) + 1;
		}
	}	
}

int main(){
	collatz(125);
	return 0;
}

