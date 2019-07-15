#include <stdio.h>
#include <stdlib.h>

int main(){
	int number;
	printf("Enter a positive integer:");
	scanf("%d",&number);
	for (int i=2;i<number;i++){
		if (number % i == 0){
			printf("%d is not prime number\n",number);
			return EXIT_SUCCESS;
		}		
	}
	printf("%d is prime number.\n",number);
	return EXIT_SUCCESS;		
}
