#include <stdio.h>

int main() { 
	int x;
	for(x=1; x <= 100; x++){
		if(x%15==0){
			printf("Fizzbuzz, ");
		}
		else if(x%3==0){
			printf("Fizz, ");
		}
		else if(x%5==0){
			printf("Buzz, ");
		}
		else{
			printf("%d, ",x);
		}

	}


}