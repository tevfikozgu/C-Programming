#include <stdio.h>
#include <stdlib.h>

int main(){
	int number1,number2;
	printf("Enter two positive integers:");
	scanf("%d",&number1);
	scanf("%d",&number2);
	if (number1>=number2){
		for (int i=number2;i>=1;i--){
			if (number1%i == 0 && number2%i == 0){
				printf("The Greatest Common divider of %d and %d is %d.\n",number1,number2,i);
				int lcm=(number1*number2)/i;
				printf("The least common multiple of %d and %d is %d.\n",number1,number2,lcm);
				return EXIT_SUCCESS;
			}
		}
	}
	else{
		for (int i=number1;i>=1;i--){
			if (number1%i == 0 && number2%i == 0){
				printf("The Greatest Common divider of %d and %d is %d.\n",number1,number2,i);
				int lcm=(number1*number2)/i;
				printf("The least common multiple of %d and %d is %d.\n",number1,number2,lcm);
				return EXIT_SUCCESS;
			}
		}
	}	
	return EXIT_SUCCESS;
}
